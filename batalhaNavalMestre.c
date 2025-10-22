#include <stdio.h> 

#define LINHA 10
#define COLUNA 10

#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

int main() {
    int tabuleiro[LINHA][COLUNA] = {0};

    // Posicionando navios
    tabuleiro[2][2] = NAVIO;
    tabuleiro[2][3] = NAVIO;
    tabuleiro[5][5] = NAVIO;
    tabuleiro[6][5] = NAVIO;