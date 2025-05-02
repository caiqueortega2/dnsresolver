[![MIT License](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

`dnsresolver` é um utilitário de linha de comando escrito em C que realiza a enumeração de subdomínios. Ele recebe um arquivo contendo uma lista de possíveis subdomínios e um domínio alvo, tentando resolver os IPs de cada subdomínio e exibindo os resultados encontrados.

---

**Aviso Legal:**

Qualquer ação e/ou atividade relacionada ao uso do `dnsresolver` é de sua inteira responsabilidade. O uso indevido desta ferramenta pode resultar em acusações criminais contra as pessoas em questão. Os contribuidores não serão responsabilizados caso quaisquer acusações criminais sejam apresentadas contra indivíduos que utilizem esta ferramenta para infringir a lei.

Esta ferramenta contém materiais que podem ser potencialmente prejudiciais ou perigosos. Consulte as leis de sua província/país antes de acessar, usar ou de qualquer outra forma utilizar isso de maneira inadequada.

Esta ferramenta é feita apenas para fins educacionais. Não tente violar a lei com nada contido aqui. Se esta for sua intenção, então vá embora!

Ela apenas demonstra "como a descoberta de subdomínios funciona". Você não deve usar indevidamente as informações para obter acesso não autorizado a sistemas. No entanto, você pode testar isso por sua própria conta e risco em ambientes controlados.

---

**Uso:**

Para utilizar o `dnsresolver`, siga as instruções abaixo após compilar o código:

```bash
./dnsresolver <arquivo_subdominios> <dominio>
