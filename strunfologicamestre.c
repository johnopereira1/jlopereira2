#include <stdio.h>

int main() {
    // === Declaração das variáveis das cartas ===
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

    // === DESAFIO FINAL: Comparação com dois atributos ===
    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    // Menu para o primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção (1 a 5): ");
    scanf("%d", &opcao1);

    // Menu para o segundo atributo
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        if (opcao1 != 1) printf("1 - População\n");
        if (opcao1 != 2) printf("2 - Área\n");
        if (opcao1 != 3) printf("3 - PIB\n");
        if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
        if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
        printf("Digite a opção (1 a 5): ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1) printf("Você já escolheu esse atributo. Escolha outro.\n");
    } while (opcao2 == opcao1);

    // Atribuindo valores do primeiro atributo
    switch (opcao1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = pontoturistico1;
            valor1_carta2 = pontoturistico2;
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Atribuindo valores do segundo atributo
    switch (opcao2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = pontoturistico1;
            valor2_carta2 = pontoturistico2;
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Ajuste da lógica de comparação para soma
    float v1_ajustado1 = (opcao1 == 5) ? -valor1_carta1 : valor1_carta1;
    float v1_ajustado2 = (opcao1 == 5) ? -valor1_carta2 : valor1_carta2;

    float v2_ajustado1 = (opcao2 == 5) ? -valor2_carta1 : valor2_carta1;
    float v2_ajustado2 = (opcao2 == 5) ? -valor2_carta2 : valor2_carta2;

    soma1 = v1_ajustado1 + v2_ajustado1;
    soma2 = v1_ajustado2 + v2_ajustado2;

    // Mostrar os resultados
    char *nomes[] = {"", "População", "Área", "PIB", "Pontos Turísticos", "Densidade Demográfica"};

    printf("\n--- COMPARAÇÃO FINAL ---\n");
    printf("Cidade 1: %s\n", nomecidade1);
    printf("Cidade 2: %s\n", nomecidade2);
    printf("\nAtributo 1 (%s): %.2f vs %.2f", nomes[opcao1], valor1_carta1, valor1_carta2);
    printf("\nAtributo 2 (%s): %.2f vs %.2f", nomes[opcao2], valor2_carta1, valor2_carta2);
    printf("\n\nSoma dos atributos (ajustada):\n");
    printf("%s: %.2f\n", nomecidade1, soma1);
    printf("%s: %.2f\n", nomecidade2, soma2);

    if (soma1 > soma2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (soma2 > soma1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
