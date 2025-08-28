#include <stdio.h>

int main() {
    // DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 1
    char  codigo1[4];
    int   populacao1;
    float area1;
    float pib_bilhoes1;
    int   pontos_turisticos1;

    // DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 2
    char  codigo2[4];
    int   populacao2;
    float area2;
    float pib_bilhoes2;
    int   pontos_turisticos2;

    // CADASTRO DA CARTA 1
    
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_bilhoes1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // CADASTRO DA CARTA 2

    printf("Digite o codigo (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_bilhoes2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // CALCULO DA DENSIDADE E DO PIB PER CAPITA
    float densidade1 = (float)populacao1 / area1;
    double pib_per_capita1 = (pib_bilhoes1 * 1000000000.0) / populacao1;
    
    float densidade2 = (float)populacao2 / area2;
    double pib_per_capita2 = (pib_bilhoes2 * 1000000000.0) / populacao2;

    // EXIBIÇÃO DAS CARTAS CADASTRADAS

    printf("\n CARTA 1 \n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB Total: R$ %.2f bilhoes\n", pib_bilhoes1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\n CARTA 2 \n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB Total: R$ %.2f bilhoes\n", pib_bilhoes2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}