#include <stdio.h>

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //  Criando o tabuleiro (matriz 10x10)
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;  // inicializa com água
        }
    }

    //  Posicionando os navios (valor 3)
    // Navio horizontal (linha 3, colunas 3-5)
    for (int j = 2; j <= 4; j++) {
        tabuleiro[2][j] = 3;
    }

    // Navio vertical (coluna 7, linhas 5-7)
    for (int i = 4; i <= 6; i++) {
        tabuleiro[i][6] = 3;
    }
    //Navio Diagonal principal - (0,0) até (2,2)
    for (int i = 0; i < 3; i++) {
        // valida para não sobrepor
        if (tabuleiro[i][i] == 0) {
            tabuleiro[i][i] = 3;
        }
    }
    // 3. Imprimir o tabuleiro
    printf("--- TABULEIRO DE BATALHA NAVAL! ---\n");

    // Cabeçalho com letras (A–J)
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    // Números nas linhas + conteúdo do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%-2d", i + 1); // alinha à esquerda (1, 2, 3...)
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // água = 0, navio = 3
        }
        printf("\n");
    }

    return 0;
}