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
        // Aplicando habilidade Cone em (1,1)
    for(int i=-2; i<=2; i++){
        for(int j=-2; j<=2; j++){
            int x = 1 + i;
            int y = 1 + j;
            if(x>=0 && x<LINHA && y>=0 && y<COLUNA){
                if(j >= -i && j <= i && tabuleiro[x][y]!=NAVIO)
                    tabuleiro[x][y] = HABILIDADE;
            }
        }
    }
    // Aplicando habilidade Cruz em (5,5)
    for(int i=-2; i<=2; i++){
        for(int j=-2; j<=2; j++){
            int x = 5 + i;
            int y = 5 + j;
            if(x>=0 && x<LINHA && y>=0 && y<COLUNA){
                if(i==0 || j==0){
                    if(tabuleiro[x][y]!=NAVIO)
                        tabuleiro[x][y] = HABILIDADE;
                }
            }
        }
    }
    // Aplicando habilidade Octaedro em (7,2)
    for(int i=-2; i<=2; i++){
        for(int j=-2; j<=2; j++){
            int x = 7 + i;
            int y = 2 + j;
            if(x>=0 && x<LINHA && y>=0 && y<COLUNA){
                if(i+j >=0 && i+j <=4 && j-i <=2 && i-j <=2){
                    if(tabuleiro[x][y]!=NAVIO)
                        tabuleiro[x][y] = HABILIDADE;
                }
            }
        }
    }