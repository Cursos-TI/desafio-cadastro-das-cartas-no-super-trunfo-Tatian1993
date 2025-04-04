#include <stdio.h>

int main() {
    // Declarando variáveis da carta 1
    char carta1;
    char estadoC1[50];
    char codigoC1[50];
    char cidadeC1[50];
    int populacaoC1;
    float areaC1;
    float pibC1;
    int numeroDePontosTuristicosC1;
    float densidadeC1;
    float pibPerCapitaC1;

    // Declarando variáveis da carta 2
    char carta2;
    char estadoC2[50];
    char codigoC2[50];
    char cidadeC2[50];
    int populacaoC2;
    float areaC2;
    float pibC2;
    int numeroDePontosTuristicosC2;
    float densidadeC2;
    float pibPerCapitaC2;

    // Informações carta 1
    printf("Informacoes para carta 1: ");
    scanf(" %c", &carta1);
    printf("Estado: ");
    scanf("%49s", estadoC1);
    printf("Codigo: ");
    scanf("%49s", codigoC1);
    printf("Nome da cidade: ");
    scanf("%49s", cidadeC1);
    printf("Populacao: ");
    scanf("%d", &populacaoC1);
    printf("Area: ");
    scanf("%f", &areaC1);
    printf("PIB: ");
    scanf("%f", &pibC1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicosC1);
    printf("densidade populacional: ");
    scanf("%f", &densidadeC1);
    printf("pib per capita: ");
    scanf("%f", &pibPerCapitaC1);

    // Cálculo da densidade populacional e PIB per capita para carta 1
    
    densidadeC1 = (float) populacaoC1 / areaC1;
    pibPerCapitaC1 = (float) pibC1 / populacaoC1;
     
    // Informações carta 2
    printf("===========================================\n");
    printf("Informações para carta 2: ");
    scanf(" %c", &carta2);
    printf("Estado: ");
    scanf("%49s", estadoC2);
    printf("Código: ");
    scanf("%49s", codigoC2);
    printf("Nome da cidade: ");
    scanf("%49s", cidadeC2);
    printf("População: ");
    scanf("%d", &populacaoC2);
    printf("Área: ");
    scanf("%f", &areaC2);
    printf("PIB: ");
    scanf("%f", &pibC2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicosC2);
    printf("densidade populacional: ");
    scanf("%f", &densidadeC2);
    printf("pib per capita: ");
    scanf("%f", &pibPerCapitaC2);

    // Cálculo da densidade populacional e PIB per capita para carta 2
    densidadeC2 = (float) populacaoC2 / areaC2;
    pibPerCapitaC2 = pibC2 / populacaoC2;
    
    printf("=============================================\n");

    // Exibição de informação carta 1
    printf("Carta 1: %c\n", carta1);
    printf("Estado: %s\n", estadoC1);
    printf("Codigo da carta: %s\n", codigoC1);
    printf("Nome da cidade: %s\n", cidadeC1);
    printf("População: %d\n", populacaoC1);
    printf("Area: %.2f\n", areaC1);
    printf("PIB: %.2f\n", pibC1);
    printf("Numero de pontos turisticos: %d\n", numeroDePontosTuristicosC1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadeC1);
    printf("PIB per capita: %.2f\n", pibPerCapitaC1);

    printf("===========================================\n");

    // Exibição de informação carta 2
    printf("Carta 2: %c\n", carta2);
    printf("Estado: %s\n", estadoC2);
    printf("Codigo da carta: %s\n", codigoC2);
    printf("Nome da cidade: %s\n", cidadeC2);
    printf("Populacao: %d\n", populacaoC2);
    printf("Area: %.2f\n", areaC2);
    printf("PIB: %.2f\n", pibC2);
    printf("Numero de pontos turisticos: %d\n", numeroDePontosTuristicosC2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadeC2);
    printf("PIB per capita: %.2f\n", pibPerCapitaC2);
    
}