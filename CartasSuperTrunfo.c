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

 int opcao;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else {
                if (area2 > area1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else {
                if (pib2 > pib1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("Carta 1 - %s: %d pontos turisticos\n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos turisticos\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else {
                if (densidade2 < densidade1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
       }

int atributo1, atributo2;
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;
    float somaCarta1, somaCarta2;
    char nomeAtributo1[30], nomeAtributo2[30];

    printf("\n=== COMPARAÇÃO AVANÇADA ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite a opcao: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Digite a opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
    } else {
        switch (atributo1) {
            case 1:
                valor1Carta1 = (float) populacao1;
                valor1Carta2 = (float) populacao2;
                sprintf(nomeAtributo1, "Populacao");
                break;

            case 2:
                valor1Carta1 = area1;
                valor1Carta2 = area2;
                sprintf(nomeAtributo1, "Area");
                break;

            case 3:
                valor1Carta1 = pib1;
                valor1Carta2 = pib2;
                sprintf(nomeAtributo1, "PIB");
                break;

            case 4:
                valor1Carta1 = (float) pontosTuristicos1;
                valor1Carta2 = (float) pontosTuristicos2;
                sprintf(nomeAtributo1, "Pontos Turisticos");
                break;

            case 5:
                valor1Carta1 = densidade1;
                valor1Carta2 = densidade2;
                sprintf(nomeAtributo1, "Densidade Demografica");
                break;

            default:
                printf("\nOpcao invalida para o primeiro atributo.\n");
                return 0;
        }

        switch (atributo2) {
            case 1:
                valor2Carta1 = (float) populacao1;
                valor2Carta2 = (float) populacao2;
                sprintf(nomeAtributo2, "Populacao");
                break;

            case 2:
                valor2Carta1 = area1;
                valor2Carta2 = area2;
                sprintf(nomeAtributo2, "Area");
                break;

            case 3:
                valor2Carta1 = pib1;
                valor2Carta2 = pib2;
                sprintf(nomeAtributo2, "PIB");
                break;

            case 4:
                valor2Carta1 = (float) pontosTuristicos1;
                valor2Carta2 = (float) pontosTuristicos2;
                sprintf(nomeAtributo2, "Pontos Turisticos");
                break;

            case 5:
                valor2Carta1 = densidade1;
                valor2Carta2 = densidade2;
                sprintf(nomeAtributo2, "Densidade Demografica");
                break;

            default:
                printf("\nOpcao invalida para o segundo atributo.\n");
                return 0;
        }

        // Para densidade demografica, menor valor vence.
        // Para somar de forma justa, usamos o inverso da densidade.
        somaCarta1 = (atributo1 == 5 ? 1 / valor1Carta1 : valor1Carta1)
                   + (atributo2 == 5 ? 1 / valor2Carta1 : valor2Carta1);

        somaCarta2 = (atributo1 == 5 ? 1 / valor1Carta2 : valor1Carta2)
                   + (atributo2 == 5 ? 1 / valor2Carta2 : valor2Carta2);

        printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
        printf("Carta 1: %s\n", cidade1);
        printf("Carta 2: %s\n", cidade2);

        printf("\nAtributos escolhidos: %s e %s\n", nomeAtributo1, nomeAtributo2);

        printf("\n%s:\n", nomeAtributo1);
        printf("Carta 1 - %s: %.2f\n", cidade1, valor1Carta1);
        printf("Carta 2 - %s: %.2f\n", cidade2, valor1Carta2);
        printf("Vencedor no atributo: Carta %d\n",
               atributo1 == 5
               ? (valor1Carta1 < valor1Carta2 ? 1 : 2)
               : (valor1Carta1 > valor1Carta2 ? 1 : 2));

        printf("\n%s:\n", nomeAtributo2);
        printf("Carta 1 - %s: %.2f\n", cidade1, valor2Carta1);
        printf("Carta 2 - %s: %.2f\n", cidade2, valor2Carta2);
        printf("Vencedor no atributo: Carta %d\n",
               atributo2 == 5
               ? (valor2Carta1 < valor2Carta2 ? 1 : 2)
               : (valor2Carta1 > valor2Carta2 ? 1 : 2));

        printf("\nSoma dos atributos:\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, somaCarta1);
        printf("Carta 2 - %s: %.2f\n", cidade2, somaCarta2);

        if (somaCarta1 > somaCarta2) {
            printf("\nResultado final: Carta 1 (%s) venceu!\n", cidade1);
        } else if (somaCarta2 > somaCarta1) {
            printf("\nResultado final: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nResultado final: Empate!\n");
        }
    }

    return 0;
}