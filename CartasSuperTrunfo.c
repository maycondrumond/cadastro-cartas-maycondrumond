#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro da Carta 1
    printf("=== CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area em km²: ");
    scanf("%f", &area1);

    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1;

    superPoder1 = (float) populacao1 
                + area1 
                + pib1 
                + (float) pontosTuristicos1 
                + pibPerCapita1 
                + (1 / densidade1);

    // Cadastro da Carta 2
    printf("\n=== CARTA 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em km²: ");
    scanf("%f", &area2);

    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;

    superPoder2 = (float) populacao2 
                + area2 
                + pib2 
                + (float) pontosTuristicos2 
                + pibPerCapita2 
                + (1 / densidade2);

    // Exibição da Carta 1
    printf("\n=== DADOS DA CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição da Carta 2
    printf("\n=== DADOS DA CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");

    printf("Populacao: Carta %d venceu (%d)\n", 
           (populacao1 > populacao2) ? 1 : 2, 
           populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n", 
           (area1 > area2) ? 1 : 2, 
           area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n", 
           (pib1 > pib2) ? 1 : 2, 
           pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, 
           pontosTuristicos1 > pontosTuristicos2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade1 < densidade2) ? 1 : 2, 
           densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2, 
           pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta %d venceu (%d)\n", 
           (superPoder1 > superPoder2) ? 1 : 2, 
           superPoder1 > superPoder2);

    // Comparação de cartas usando um único atributo
    // Atributo escolhido: População
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    return 0;
}