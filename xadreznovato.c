#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação da TORRE
    // Estrutura de repetição: FOR
    // Movimento: 5 casas para a direita
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha separadora para visualização
    printf("\n");

    // -------------------------------
    // Simulação do BISPO
    // Estrutura de repetição: WHILE
    // Movimento: 5 casas na diagonal para cima e à direita
    // -------------------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Linha separadora para visualização
    printf("\n");

    // -------------------------------
    // Simulação da RAINHA
    // Estrutura de repetição: DO-WHILE
    // Movimento: 8 casas para a esquerda
    // -------------------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // Final do programa
    return 0;
}
