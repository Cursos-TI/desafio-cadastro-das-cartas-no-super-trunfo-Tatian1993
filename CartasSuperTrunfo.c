#include <stdio.h>

int main() {

    // Declarando variaveis da carta 1
    char carta1;
    char estadoC1[50];
    char codigoC1[50];
    char cidadeC1[50];
    int populacaoC1;
    float areaC1;
    float pibC1;
    int numeroDePontosTuristicosC1;
    
    // Declarando variaveis da carta 2
    char carta2;
    char estadoC2[50];
    char codigoC2[50];    
    char cidadeC2[50];
    int populacaoC2;
    float areaC2;
    float pibC2;
    int numeroDePontosTuristicosC2;
 
    //informações carta 1
    printf("Informacoes para carta 1 :");
    scanf(" %c", &carta1);
    
    printf("estado: ");
    scanf("%49s", &estadoC1);
    
    printf("codigo: ");
    scanf("%s", &codigoC1);
    

    printf("nome da cidade: ");
    scanf("%s", &cidadeC1);
    
    printf("populacao: ");
    scanf("%d", &populacaoC1);
    
    printf("area: ");
    scanf("%f", &areaC1);
    
    printf("pib: ");
    scanf("%f", &pibC1);
   
    printf("numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicosC1);

    //informações carta 2
    printf("===========================================\n");

    printf("Informacoes para carta 2: ");
    scanf(" %c", &carta2);

    printf("estado: ");
    scanf("%49s", &estadoC2);

    printf("codigo: ");
    scanf("%s", codigoC2);


    printf("nome da cidade: ");
    scanf("%s", &cidadeC2);

    printf("populacao: ");
    scanf("%d", &populacaoC2);

    printf("area: ");
    scanf("%f", &areaC2);

    printf("pib: ");
    scanf("%f", &pibC2);

    printf("numero de pontos turisticos: "); 
    scanf("%d", &numeroDePontosTuristicosC2);
    
   
    printf("=============================================\n");
     
    //exibição de informação carta 1
    printf("Carta 1:%c\n", carta1);
    printf("Estado:%s\n",estadoC1);
    printf("codigo da carta:%s\n", codigoC1);
    printf("nome da cidade:%s\n", cidadeC1); 
    printf("populacao:%d\n", populacaoC1);
    printf("area:%.2f\n", areaC1);
    printf("pib:%.2f\n",pibC1);
    printf("numero de pontos turisticos:%d\n", numeroDePontosTuristicosC1);

    printf("===========================================\n");
    
    //exibição de informação carta 2
    printf("Carta 2:%c\n", carta2);
    printf("Estado:%s\n",estadoC2);
    printf("codigo da carta:%s\n", codigoC2);
    printf("nome da cidade:%s\n", cidadeC2); 
    printf("populacao:%d\n", populacaoC2);
    printf("area:%.2f\n", areaC2);
    printf("pib:%.2f\n",pibC2);
    printf("numero de pontos turisticos:%d\n",numeroDePontosTuristicosC2);
    return 0;
}
