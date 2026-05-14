#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo[20];
    char nome_cidade[100];
    unsigned long int populacao;
    float area;
    float pib_bilhoes;
    int pontos_turisticos;
    // Campos calculados
    double densidade_populacional;
    double pib_per_capita;
    double super_poder;
} Carta;

// Função para ler os dados de uma carta via teclado
void ler_carta(Carta *carta, int numero) {
    printf("=== Dados da Carta %d ===\n", numero);
    printf("Estado: ");
    scanf(" %c", &carta->estado);
    printf("Código da carta: ");
    scanf("%s", carta->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome_cidade);
    getchar(); // Consome o \n restante no buffer
    printf("População: ");
    scanf("%lu", &carta->populacao);
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib_bilhoes);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    printf("\n");
}

// Função para calcular os atributos derivados da carta
void calcular_atributos(Carta *carta) {
    // Densidade populacional = população / área (hab/km²)
    carta->densidade_populacional = (double)carta->populacao / carta->area;

    // PIB per capita = (PIB em bilhões * 1e9) / população
    carta->pib_per_capita = (carta->pib_bilhoes * 1000000000.0) / carta->populacao;

    // Inverso da densidade (menor densidade gera maior valor)
    double inverso_densidade = 1.0 / carta->densidade_populacional;

    // Super Poder: soma de todos os atributos (com casting para double)
    carta->super_poder = (double)carta->populacao +
                         (double)carta->area +
                         (double)carta->pib_bilhoes +
                         (double)carta->pontos_turisticos +
                         carta->pib_per_capita +
                         inverso_densidade;
}

// Função para exibir os dados completos de uma carta
void exibir_carta(const Carta *carta, int numero) {
    printf("=== Carta %d ===\n", numero);
    printf("Estado: %c\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Nome da cidade: %s\n", carta->nome_cidade);
    printf("População: %lu habitantes\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib_bilhoes);
    printf("Pontos turísticos: %d\n", carta->pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta->densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", carta->pib_per_capita);
    printf("Super Poder: %.2f\n", carta->super_poder);
    printf("\n");
}

// Função para comparar as duas cartas e mostrar vencedores
void comparar_cartas(const Carta *c1, const Carta *c2) {
    printf("=== Comparação de Cartas ===\n");

    // População (maior vence)
    int win_pop = (c1->populacao > c2->populacao) ? 1 : 0;
    printf("População: %s\n", win_pop ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Área (maior vence)
    int win_area = (c1->area > c2->area) ? 1 : 0;
    printf("Área: %s\n", win_area ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // PIB (maior vence)
    int win_pib = (c1->pib_bilhoes > c2->pib_bilhoes) ? 1 : 0;
    printf("PIB: %s\n", win_pib ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Pontos turísticos (maior vence)
    int win_pontos = (c1->pontos_turisticos > c2->pontos_turisticos) ? 1 : 0;
    printf("Pontos turísticos: %s\n", win_pontos ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Densidade populacional (menor vence)
    int win_dens = (c1->densidade_populacional < c2->densidade_populacional) ? 1 : 0;
    printf("Densidade populacional: %s\n", win_dens ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // PIB per capita (maior vence)
    int win_percap = (c1->pib_per_capita > c2->pib_per_capita) ? 1 : 0;
    printf("PIB per capita: %s\n", win_percap ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Super Poder (maior vence)
    int win_super = (c1->super_poder > c2->super_poder) ? 1 : 0;
    printf("Super Poder: %s\n", win_super ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
}

int main() {
    Carta carta1, carta2;

    // Lê e calcula para a primeira carta
    ler_carta(&carta1, 1);
    calcular_atributos(&carta1);

    // Lê e calcula para a segunda carta
    ler_carta(&carta2, 2);
    calcular_atributos(&carta2);

    // Exibe dados completos
    exibir_carta(&carta1, 1);
    exibir_carta(&carta2, 2);

    // Compara as cartas
    comparar_cartas(&carta1, &carta2);

    return 0;
}