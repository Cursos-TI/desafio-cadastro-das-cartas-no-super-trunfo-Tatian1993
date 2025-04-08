#include <stdio.h>

// Funções para cálculos
float calcularDensidade(int populacao, float area) {
    if (area == 0) {
        printf("Erro: A área não pode ser zero.\n");
        return 0;
    }
    return populacao / area;
}

float calcularPIBperCapita(float pib, int populacao) {
    if (populacao == 0) {
        printf("Erro: A população não pode ser zero.\n");
        return 0;
    }
    return pib / populacao;
}

float calcularInversoDensidade(float densidade) {
    if (densidade == 0) {
        return 0;
    }
    return 1 / densidade;
}

float calcularSuperPoder(int populacao, float area, float pib, int pontos_turisticos, float pib_per_capita) {
    float densidade = calcularDensidade(populacao, area);
    float inverso_densidade = calcularInversoDensidade(densidade);
    return populacao + area + pib + pontos_turisticos + pib_per_capita + inverso_densidade;
}

// Função para comparar atributos
void compararCartas(int pop1, int pop2, float area1, float area2, float pib1, float pib2, 
                     int pontos1, int pontos2, float densidade1, float densidade2, float pibCap1, float pibCap2, 
                     float super1, float super2) {
    
    printf("\n================ Comparacao das Cartas ================\n");

    printf("Populacao: %s vence\n", (pop1 > pop2) ? "Carta 1" : "Carta 2");
    printf("Area: %s vence\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s vence\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf("Numero de pontos turisticos: %s vence\n", (pontos1 > pontos2) ? "Carta 1" : "Carta 2");
    printf("Densidade populacional: %s vence\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
    printf("PIB per capita: %s vence\n", (pibCap1 > pibCap2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s vence\n", (super1 > super2) ? "Carta 1" : "Carta 2");

    printf("=======================================================\n");
}

int main() {
    // Variáveis para carta 1
   
    char estado1[50], codigo1[50], cidade1[50];
    int pop1, pontos1;
    float area1, pib1, densidade1, pibCap1, super1;

    // Variáveis para carta 2
    char estado2[50], codigo2[50], cidade2[50];
    int pop2, pontos2;
    float area2, pib2, densidade2, pibCap2, super2;

    // Entrada de dados para carta 1
    printf("carta 1:\n");
    printf("Estado: "); scanf("%s", &estado1);
    printf("Codigo: "); scanf("%s", &codigo1);
    printf("Cidade: "); scanf("%s", &cidade1);
    printf("Populacoo: "); scanf("%d", &pop1);
    printf("Area (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Numero de pontos turisticos: "); scanf("%d", &pontos1);

    // Cálculo das métricas para carta 1
    densidade1 = calcularDensidade(pop1, area1);
    pibCap1 = calcularPIBperCapita(pib1, pop1);
    super1 = calcularSuperPoder(pop1, area1, pib1, pontos1, pibCap1);

    // Entrada de dados para carta 2
    printf("\ncarta 2:\n");
    printf("Estado: "); scanf("%s", &estado2);
    printf("Codigo: "); scanf("%s", &codigo2);
    printf("Cidade: "); scanf("%s", &cidade2);
    printf("Populacao: "); scanf("%d", &pop2);
    printf("Area (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Numero de pontos turisticos: "); scanf("%d", &pontos2);

    // Cálculo das métricas para carta 2
    densidade2 = calcularDensidade(pop2, area2);
    pibCap2 = calcularPIBperCapita(pib2, pop2);
    super2 = calcularSuperPoder(pop2, area2, pib2, pontos2, pibCap2);

    // Exibição dos resultados
    printf("\n================ Resultados das Cartas ================\n");
    printf("Carta 1 - Populacao: %d | Area: %.2f km² | PIB: %.2f | Pontos turisticos: %d\n", pop1, area1, pib1, pontos1);
    printf("Densidade: %.2f hab/km² | PIB per capita: R$ %.2f | Super Poder: %.2f\n", densidade1, pibCap1, super1);
    
    printf("\nCarta 2 - Populacao: %d | Area: %.2f km² | PIB: %.2f | Pontos turisticos: %d\n", pop2, area2, pib2, pontos2);
    printf("Densidade: %.2f hab/km² | PIB per capita: R$ %.2f | Super Poder: %.2f\n", densidade2, pibCap2, super2);

    // Comparação das cartas
    compararCartas(pop1, pop2, area1, area2, pib1, pib2, pontos1, pontos2, densidade1, densidade2, pibCap1, pibCap2, super1, super2);

    return 0;
}