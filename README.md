# dnsresolver

[![MIT License](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

`dnsresolver` é um utilitário de linha de comando escrito em C que realiza a enumeração de subdomínios. Ele recebe um arquivo contendo uma lista de possíveis subdomínios e um domínio alvo, tentando resolver os IPs de cada subdomínio e exibindo os resultados encontrados.

---

**Uso para Fins Educacionais em Cibersegurança:**

Esta ferramenta `dnsresolver` foi desenvolvida para fins educacionais no campo da cibersegurança, demonstrando técnicas de descoberta de subdomínios. Utilize-a em ambientes controlados e com permissão. O uso indevido para atividades não autorizadas é estritamente desencorajado.

---

**Uso:**

Para utilizar o `dnsresolver`, siga as instruções abaixo após compilar o código:

```bash
./dnsresolver <arquivo_subdominios> <dominio>
Instalação:

Clone este repositório (opcional, se você já tem o código localmente):

git clone https://github.com/caiqueortega2/dnsresolver.git

cd dnsresolver

Compile o código:
gcc dnsresolver.c -o dnsresolver

Torne o executável:
chmod +x dnsresolver

Recursos:
Lê uma lista de subdomínios de um arquivo.
Tenta resolver o endereço IP para cada subdomínio.
Exibe os subdomínios válidos encontrados com seus respectivos IPs.
Evita verificações duplicadas de subdomínios.
Observações:

Certifique-se de que o arquivo de subdomínios exista.
A ferramenta requer acesso à rede para realizar consultas DNS.
Desenvolvido por silentxploitt.









