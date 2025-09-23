#include <stdio.h>

int main()
{

    char estado, codigoCarta[4], cidade[50], estado2, codigoCarta2[4], cidade2[50];
    int pontosTuristicos, pontosTuristicos2;
    float areaCidade, pib, areaCidade2, pib2;
    unsigned long long int populacao, populacao2;

    // Início da interação com o usuário

    // Cadastro da carta 1:
    printf("Carta 1:\n");

    printf("Estado (Somente um caracter): \n");
    scanf(" %c", &estado);

    printf("Código da carta (A letra do estado + um número de 01 a 04): \n");
    scanf("%s", codigoCarta);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%lld", &populacao);

    printf("Área (Em Km): \n");
    scanf(" %f", &areaCidade);

    printf("PIB: \n");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pontosTuristicos);

    printf("------------------------------------------------------------------------------------------------\n");

    // Cadastro da carta 2
    printf("Carta 2:\n");

    printf("Estado (Somente um caracter): \n");
    scanf(" %c", &estado2);

    printf("Código da carta (A letra do estado + um número de 01 a 04): \n");
    scanf(" %s", codigoCarta2);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%lld", &populacao2);

    printf("Área (Em Km): \n");
    scanf(" %f", &areaCidade2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pontosTuristicos2);

    float densidadeDemografica = populacao / areaCidade;
    float densidadeDemografica2 = populacao2 / areaCidade2;

    float pibPerCapita = pib / populacao;
    float pibPerCapita2 = pib2 / populacao2;

    int contCarta1 = 0;
    int contCarta2 = 0;

    printf("Resultados (atributo por atributo):\n");

    printf("\n\n------------------------------------------------------------------------------------------------\n");

    printf("\nPopulação \n");

    printf("Carta 1: %s (%c): %lld \n", cidade, estado, populacao);
    printf("Carta 2: %s (%c): %lld \n", cidade2, estado2, populacao2);

    if (populacao > populacao2)
    {
        printf("Carta 1 (%s) venceu!", &cidade);
        contCarta1++;
    }
    else if (populacao2 > populacao)
    {
        printf("Carta 2 (%s) venceu!", &cidade2);
        contCarta2++;
    }

    printf("\n\n------------------------------------------------------------------------------------------------\n");

    printf("\nÁrea: \n");

    printf("Carta 1: %s (%c): %.2f \n", cidade, estado, areaCidade);
    printf("Carta 2: %s (%c): %.2f \n", cidade2, estado2, areaCidade2);

    if (areaCidade > areaCidade2)
    {
        printf("Carta 1 (%s) venceu!", &cidade);
        contCarta1++;
    }
    else if (areaCidade2 > areaCidade)
    {
        printf("Carta 2 (%s) venceu!", &cidade2);
        contCarta2++;
    }

    printf("\n\n------------------------------------------------------------------------------------------------\n");

    printf("\nPIB: \n");

    printf("Carta 1: %s (%c): %.2f \n", cidade, estado, pib);
    printf("Carta 2: %s (%c): %.2f \n", cidade2, estado2, pib2);

    if (pib > pib2)
    {
        printf("Carta 1 (%s) venceu!", &cidade);
        contCarta1++;
    }
    else if (pib2 > pib)
    {
        printf("Carta 2 (%s) venceu!", &cidade2);
        contCarta2++;
    }

    printf("\n\n------------------------------------------------------------------------------------------------\n");

    printf("\nPontos Turísticos: \n");

    printf("Carta 1: %s (%c): %d \n", cidade, estado, pontosTuristicos);
    printf("Carta 2: %s (%c): %d \n", cidade2, estado2, pontosTuristicos2);

    if (pontosTuristicos > pontosTuristicos2)
    {
        printf("Carta 1 (%s) venceu!", &cidade);
        contCarta1++;
    }
    else if (pontosTuristicos2 > pontosTuristicos)
    {
        printf("Carta 2 (%s) venceu!", &cidade2);
        contCarta2++;
    }

    printf("\n\n------------------------------------------------------------------------------------------------\n");

    printf("\nPIB per capita: \n");

    printf("Carta 1: %s (%c): %d \n", cidade, estado, pibPerCapita);
    printf("Carta 2: %s (%c): %d \n", cidade2, estado2, pibPerCapita2);

    if (pibPerCapita > pibPerCapita2)
    {
        printf("Carta 1 (%s) venceu!", &cidade);
        contCarta1++;
    }
    else if (pibPerCapita2 > pibPerCapita)
    {
        printf("Carta 2 (%s) venceu!", &cidade2);
        contCarta2++;
    }

    printf("\n\n------------------------------------------------------------------------------------------------\n");

    printf("\nDensidade demográfica: \n");

    printf("Carta 1: %s (%c): %.2f \n", cidade, estado, densidadeDemografica);
    printf("Carta 2: %s (%c): %.2f \n", cidade2, estado2, densidadeDemografica2);

    if (densidadeDemografica > densidadeDemografica2)
    {
        printf("Carta 2 (%s) venceu!", &cidade);
        contCarta2++;
    }
    else if (densidadeDemografica2 > densidadeDemografica)
    {
        printf("Carta 1 (%s) venceu!", &cidade2);
        contCarta1++;
    }

    printf("\n\n------------------------------------------------------------------------------------------------\n");

    if (contCarta1 > contCarta2)
    {

        printf("Carta 1 (%s) venceu o jogo!", &cidade);
    }
    else if (contCarta2 > contCarta1)
    {

        printf("Carta 2 (%s) venceu o jogo!", &cidade2);
    }
    else
    {

        printf("Empate!");
    }

    return 0;
}