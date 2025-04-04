#include <stdio.h>

int main() {
    // Declaração das variáveis das cartas
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; // em bilhões de reais
    int pontoturistico1, pontoturistico2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    // === Entrada de dados da Carta 1 ===
    printf("Cadastro de Cartas do Super Trunfo - Carta 1:\n");
    printf("Digite o estado (uma letra de A a H):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %9s", codigo1);
    getchar(); // limpar buffer do teclado

    printf("Digite o nome da cidade:\n");
    scanf(" %49[^\n]", nomecidade1);

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico1);

    // === Entrada de dados da Carta 2 ===
    printf("\nCadastro de Cartas do Super Trunfo - Carta 2:\n");
    printf("Digite o estado (uma letra de A a H):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %9s", codigo2);
    getchar(); // limpar buffer do teclado

    printf("Digite o nome da cidade:\n");
    scanf(" %49[^\n]", nomecidade2);

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico2);

    // === Cálculos: Densidade Populacional e PIB per capita ===
    if (area1 == 0 || area2 == 0 || populacao1 == 0 || populacao2 == 0) {
        printf("Erro: área ou população não podem ser zero para os cálculos.\n");
        return 1;
    }

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // === COMPARAÇÃO ===
    // Atributo de comparação definido: PIB (maior valor vence)
    printf("\nComparação de cartas (Atributo: PIB):\n\n");

    printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nomecidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nomecidade2, estado2, pib2);

    if (pib1 > pib2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (pib2 > pib1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
