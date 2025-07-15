#include <stdio.h>

int main() {
    
    // Criando matriz e inicializando com tamanho 10 x 10 e valor 0
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    // Criando 2 navios pra cair no pau
    int navioPirata[3] = {3,3,3}, navioGuardaReal[3] = {3,3,3};

    // Substituindo os valores no tabuleiro
    // Navio Guarda real posição a posição   
    tabuleiro[2][3] = navioGuardaReal[0];
    tabuleiro[2][4] = navioGuardaReal[1];
    tabuleiro[2][5] = navioGuardaReal[2];

    // Navio Pirata posição a posição
    tabuleiro[5][8] = navioPirata[0];
    tabuleiro[6][8] = navioPirata[1];
    tabuleiro[7][8] = navioPirata[2];
    
    // Printando o tabuleiro
    printf("***Jogo batalha naval***\n");
    for (int i = 0; i < 10; i++){  
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);        
        }
        printf("\n");
    }

    return 0;
}
