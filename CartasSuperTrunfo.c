#include <stdio.h>

int main() {
    
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    
    printf("Cadastro da Carta 1\n");
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%i", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &pontosTuristicos1);

    printf("Cadastro da Carta 2\n");
    printf("Digite o codigo (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%i", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &pontosTuristicos2);

    printf("CARTA 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %i habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f milhoes\n", pib1);
    printf("Numero de pontos turisticos: %i\n\n", pontosTuristicos1);

    printf("CARTA 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %i habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f milhoes\n", pib2);
    printf("Numero de pontos turisticos: %i\n", pontosTuristicos2);

    return 0;
}