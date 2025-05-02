#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <arpa/inet.h>
#define MAX_SUBDOMAINS 100

void check_subdomain(const char *domain, const char *subdomain) {
    char full_domain[256];
    struct hostent *host;

    snprintf(full_domain, sizeof(full_domain), "%s.%s", subdomain, domain);

    host = gethostbyname(full_domain);

    if (host != NULL) {
        printf("\033[1;32m[+] \033[0m\033[1;34m%s\033[0m -> \033[1;33m%s\033[0m\n", full_domain, inet_ntoa(*(struct in_addr *)host->h_addr_list[0]));
    }
}

int main(int argc, char *argv[]) {
    printf("\033[1;35m===============================================\033[0m\n");
    printf("\033[1;36m\t\tDesolvido por silentxploit!\033[0m\n");
    printf("\033[1;35mUse em ambiente controlado para fins educacionais\033[0m\n");
    printf("\033[1;35m===============================================\033[0m\n");

    if (argc != 3) {
        printf("\033[1;31mUso incorreto! Modo de uso correto: ./dnsresolver <arquivo_subdominios> <dominio>\033[0m\n");
        printf("\033[1;33mExemplo: ./dnsresolver resolver.txt terra.com.br\033[0m\n");
        return 1;
    }

    const char *subdomains_file = argv[1];
    const char *domain = argv[2];

    FILE *file = fopen(subdomains_file, "r");
    if (file == NULL) {
        printf("\033[1;31mErro ao abrir o arquivo %s.\033[0m\n", subdomains_file);
        return 1;
    }

    char subdomain[256];
    char seen_subdomains[MAX_SUBDOMAINS][256];
    int seen_count = 0;

    printf("\033[1;33mBuscando subdomínios para \033[1;34m%s\033[0m...\n", domain);

    while (fgets(subdomain, sizeof(subdomain), file) != NULL) {
        subdomain[strcspn(subdomain, "\n")] = 0;

        int duplicate = 0;
        for (int i = 0; i < seen_count; i++) {
            if (strcmp(subdomain, seen_subdomains[i]) == 0) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            check_subdomain(domain, subdomain);
            strcpy(seen_subdomains[seen_count], subdomain);
            seen_count++;
        }
    }

    fclose(file);

    return 0;
}
