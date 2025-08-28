#include <stdio.h>

int main() {
    // DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 1
    char estado1[2];
    char  codigo1[4];
    char cidade1[99];
    int   populacao1;
    float area1;
    float pib1;
    int   pontos_turisticos1;

    // DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 2
    char estado2[2];
    char  codigo2[4];
    char cidade2[99];
    int   populacao2;
    float area2;
    float pib2;
    int   pontos_turisticos2;

    // CADASTRO DA CARTA 1

    printf("Digite o estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado1);
    
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // CADASTRO DA CARTA 2

    printf("Digite o estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado2);
    
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");
    
    // CALCULO DA DENSIDADE E DO PIB PER CAPITA
    float densidade1 = (float)populacao1 / area1;
    double pib_per_capita1 = (pib1*1000000000) / populacao1;
    
    float densidade2 = (float)populacao2 / area2;
    double pib_per_capita2 = (pib2*1000000000) / populacao2;

    // CALCULO DO SUPER PODER
    float superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1/densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1/densidade2);

    // COMPARANDO OS ATRIBUTOS
    if (populacao1 > populacao2) {
        printf("Populacao: %s venceu\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("Populacao: %s venceu\n", cidade2);
    }
    else {
        printf("Populacao: Empate\n");
    }

    if (area1 > area2) {
        printf("Area: %s venceu\n", cidade1);
    }
    else if (area2 > area1) {
        printf("Area: %s venceu\n", cidade2);
    }
    else {
        printf("Area: Empate\n");
    }

    if (pib1 > pib2) {
        printf("PIB: %s venceu\n", cidade1);
    }
    else if (pib2 > pib1) {
        printf("PIB: %s venceu\n", cidade2);
    }
    else {
        printf("PIB: Empate\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos turisticos: %s venceu\n", cidade1);
    }
    else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("Pontos turisticos: %s venceu\n", cidade2);
    }
    else {
        printf("Pontos turisticos: Empate\n");
    }

    if (densidade1 > densidade2) {
        printf("Densidade populacional: %s venceu\n", cidade2);
    }
    else if (densidade2 > densidade1) {
        printf("Densidade populacional: %s venceu\n", cidade1);
    }
    else {
        printf("Densidade populacional: Empate\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per capita: %s venceu\n", cidade1);
    }
    else if (pib_per_capita2 > pib_per_capita1) {
        printf("PIB per capita: %s venceu\n", cidade2);
    }
    else {
        printf("PIB per capita: Empate\n");
    }

    if (superPoder1 > superPoder2) {
        printf("Super poder: %s venceu\n", cidade1);
    }
    else if (superPoder2 > superPoder1) {
        printf("Super poder: %s venceu\n", cidade2);
    }
    else {
        printf("Super poder: Empate\n");
    }

    // EXIBIÇÃO DAS CARTAS CADASTRADAS

    printf("\n CARTA 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB Total: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n CARTA 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB Total: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    return 0;
}