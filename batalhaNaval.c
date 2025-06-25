#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Novato
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int navio_horizontal[3] = {0, 1, 2};
    int navio_vertical[3] = {0, 1, 2};
    int i, j;

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona o navio horizontal
    int linha_horizontal = 3;
    int coluna_horizontal = 2;
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
    }

    // Posiciona o navio vertical
    int linha_vertical = 5;
    int coluna_vertical = 7;
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = 3;
    }

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}