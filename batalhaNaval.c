#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    //1. Criando o Trabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++){
    for (int j = 0; i < 10; j++){
        tabuleiro[i][j] = 3;  
    }
}
    //Posicionando os Navios!
    //Navio horizontal (linha 3, colunas 3-5)
    for (int j = 2; i < 3; j++)
    {
        tabuleiro [2][j] = 3;
    }
    //Navio vertical (coluna 7, linhas 5-7)
    for (int i = 5; i < 8; i++)
    {
        tabuleiro[i][6] = 3;
    }
    
    //Imprimir o tabuleiro
    printf("--- TABULEIRO DE BATALHA NAVAL! ---\n");
    
    // Cabeçalho com letras (A–J)
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");
    
    return 0;
}
