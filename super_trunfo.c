#include <stdio.h>

int main()
{

    char estado, estado2;
    int pontosTuristicos, pontosTuristicos2;
    float areaCidade, pib, areaCidade2, pib2;
    unsigned long long int populacao, populacao2;

    // Cadastro da carta 1:
    estado = "A";
    char codigoCarta[4] = "A01";
    char cidade[50] = "Pitangueiras";
    populacao = 231213214;
    areaCidade = 43242423;
    pib = 23232412;
    pontosTuristicos = 2;

    // Cadastro da carta 2:
    estado2 = "B";
    char codigoCarta2[4] = "B01";
    char cidade2[50] = "Bebedouro";
    populacao2 = 233233214;
    areaCidade2 = 231432423;
    pib2 = 234324242;
    pontosTuristicos2 = 2;

    float densidadeDemografica = populacao / areaCidade;
    float densidadeDemografica2 = populacao2 / areaCidade2;

    float pibPerCapita = pib / populacao;
    float pibPerCapita2 = pib2 / populacao2;

    // int contCarta1 = 0;
    // int contCarta2 = 0;

    int atributo;

    printf("Selecione qual atributo deseja comparar:\n1 - População\n2 - Área da cidade\n3 - PIB\n4 - Pontos Turísticos\n5 - Pib per Capita\n6 - Densidade demográfica\n");
    scanf("%d", &atributo);

    switch (atributo)
    {

    case 1:
        if (populacao > populacao2)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPopulação: %lld\n\n", cidade, populacao);
            printf("Dados Carta 2:\nNome: (%s)\nPopulação: %lld\n\n", cidade2, populacao2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 1 (%s) venceu!\n", cidade);
        }
        else if (populacao2 > populacao)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPopulação: %lld\n\n", cidade, populacao);
            printf("Dados Carta 2:\nNome: (%s)\nPopulação: %lld\n\n", cidade2, populacao2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Empate!");
        }
        break;

    case 2:
        if (areaCidade > areaCidade2)
        {
            printf("Dados Carta 1:\nNome: (%s)\nÁrea da cidade: %.2f\n\n", cidade, areaCidade);
            printf("Dados Carta 2:\nNome: (%s)\nÁrea da cidade: %.2f\n\n", cidade2, areaCidade2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 1 (%s) venceu!\n", cidade);
        }
        else if (areaCidade2 > areaCidade)
        {
            printf("\nDados Carta 1:\nNome: (%s)\nÁrea da cidade: %.2f \n\n", cidade, areaCidade);
            printf("Dados Carta 2:\nNome: (%s)\nÁrea da cidade: %.2f \n\n", cidade2, areaCidade2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 2 (%s) venceu!\n\n", cidade2);
        }
        else
        {
            printf("Empate!");
        }
        break;

    case 3:
        if (pib > pib2)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPIB: %.2f\n\n", cidade, pib);
            printf("Dados Carta 2:\nNome: (%s)\nPIB: %.2f\n\n", cidade2, pib2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 1 (%s) venceu!\n", cidade);
        }
        else if (pib2 > pib)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPIB: %.2f\n\n", cidade, pib);
            printf("Dados Carta 2:\nNome: (%s)\nPIB: %.2f\n\n", cidade2, pib2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Empate!");
        }

        break;

    case 4:
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPontos Turísticos: %.2f\n\n", cidade, pontosTuristicos);
            printf("Dados Carta 2:\nNome: (%s)\nPontos Turísticos: %.2f\n\n", cidade2, pontosTuristicos2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 1 (%s) venceu!\n", cidade);
        }
        else if (pontosTuristicos2 > pontosTuristicos)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPontos Turísticos: %.2f\n\n", cidade, pontosTuristicos);
            printf("Dados Carta 2:\nNome: (%s)\nPontos Turísticos: %.2f\n\n", cidade2, pontosTuristicos2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Empate!");
        }

    case 5:
        if (pibPerCapita > pibPerCapita2)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPib per capita: %.2f\n\n", cidade, pibPerCapita);
            printf("Dados Carta 2:\nNome: (%s)\nPib per capita: %.2f\n\n", cidade2, pibPerCapita2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 1 (%s) venceu!", cidade);
        }
        else if (pibPerCapita2 > pibPerCapita)
        {
            printf("Dados Carta 1:\nNome: (%s)\nPib per capita: %.2f\n\n", cidade, pibPerCapita);
            printf("Dados Carta 2:\nNome: (%s)\nPib per capita: %.2f\n\n", cidade2, pibPerCapita2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 2 (%s) venceu!", cidade2);
        }
        else
        {
            printf("Empate");
        }
        break;

    case 6:
        if (densidadeDemografica < densidadeDemografica2)
        {
            printf("Dados Carta 1:\nNome: (%s)\nDensidade demográfica: %.2f\n\n", cidade, densidadeDemografica);
            printf("Dados Carta 2:\nNome: (%s)\nDensidade demográfica: %.2f\n\n", cidade2, densidadeDemografica2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 1 (%s) venceu!", cidade);
        }
        else if (densidadeDemografica2 < densidadeDemografica)
        {
            printf("Dados Carta 1:\nNome: (%s)\nDensidade demográfica: %.2f\n\n", cidade, densidadeDemografica);
            printf("Dados Carta 2:\nNome: (%s)\nDensidade demográfica: %.2f\n\n", cidade2, densidadeDemografica2);
            printf("--------------------------------------------------------------------------\n\n");
            printf("Carta 2 (%s) venceu!", cidade2);
        }
        else
        {
            printf("Empate!");
        }

        break;

    default:
        printf("Número inválido!");
        break;
    }

    return 0;

    /*
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


    /*
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
*/
}