#include <stdio.h>

// Definindo tamanho do tabuleiro
#define Linhas 10
#define Colunas 10
#define Navio 3

int main() {
    
    // Criando matriz e inicializando com tamanho 10 x 10
    int tabuleiro[Linhas][Colunas];

    // Inicializando tabuleiro
    for (int i = 0; i < Linhas; i++){
        for (int j = 0; j < Colunas; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Criando 2 navios pra cair no pau
    int navioPirata[Navio] = {3,3,3}, navioGuardaReal[Navio] = {3,3,3};
    int navioMercantil[Navio] = {3,3,3}, navioDestroyer[Navio] = {3,3,3};

    // Substituindo os valores no tabuleiro
    // Navio Guarda real posição a posição   
    tabuleiro[1][2] = navioGuardaReal[0];
    tabuleiro[1][3] = navioGuardaReal[1];
    tabuleiro[1][4] = navioGuardaReal[2];

    // Navio Pirata posição a posição
    tabuleiro[5][8] = navioPirata[Navio];
    tabuleiro[6][8] = navioPirata[Navio];
    tabuleiro[7][8] = navioPirata[Navio];

    // Navio Mercantil
    tabuleiro[4][0] = navioMercantil[Navio];
    tabuleiro[5][1] = navioMercantil[Navio];
    tabuleiro[6][2] = navioMercantil[Navio];

    // Navio Destroyer
    tabuleiro[3][7] = navioDestroyer[0];
    tabuleiro[4][6] = navioDestroyer[1];
    tabuleiro[5][5] = navioDestroyer[2];
    
    // Printando o tabuleiro
    printf("***Jogo batalha naval***\n");
    for (int i = 0; i < Linhas; i++){  
        for (int j = 0; j < Colunas; j++){
            printf("%d ", tabuleiro[i][j]);        
        }
        printf("\n");
    }

    return 0;
}
