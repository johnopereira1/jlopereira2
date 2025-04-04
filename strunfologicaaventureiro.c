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

    // === MENU INTERATIVO COM COMPARAÇÃO ===
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção: ");

    int opcao;
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n\n", nomecidade1, nomecidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomecidade1, populacao1);
            printf("%s: %lu habitantes\n", nomecidade2, populacao2);

            if (populacao1 != populacao2) {
                if (populacao1 > populacao2)
                    printf("Resultado: %s venceu!\n", nomecidade1);
                else
                    printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomecidade1, area1);
            printf("%s: %.2f km²\n", nomecidade2, area2);

            if (area1 != area2) {
                if (area1 > area2)
                    printf("Resultado: %s venceu!\n", nomecidade1);
                else
                    printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", nomecidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", nomecidade2, pib2);

            if (pib1 != pib2) {
                if (pib1 > pib2)
                    printf("Resultado: %s venceu!\n", nomecidade1);
                else
                    printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomecidade1, pontoturistico1);
            printf("%s: %d pontos\n", nomecidade2, pontoturistico2);

            if (pontoturistico1 != pontoturistico2) {
                if (pontoturistico1 > pontoturistico2)
                    printf("Resultado: %s venceu!\n", nomecidade1);
                else
                    printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);

            if (densidade1 != densidade2) {
                if (densidade1 < densidade2)
                    printf("Resultado: %s venceu!\n", nomecidade1);
                else
                    printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: R$ %.2f por habitante\n", nomecidade1, pibpercapita1);
            printf("%s: R$ %.2f por habitante\n", nomecidade2, pibpercapita2);

            if (pibpercapita1 != pibpercapita2) {
                if (pibpercapita1 > pibpercapita2)
                    printf("Resultado: %s venceu!\n", nomecidade1);
                else
                    printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 6.\n");
            break;
    }

    return 0;
}
