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
