/*O jogo da eliminação das pedras utiliza um tabuleiro de damas convencional com 64 casas. As colunas do
tabuleiro são numeradas de 1 a 8 da esquerda para a direita. As linhas do tabuleiro são numeradas de 1 a 8
de cima para baixo. O jogo começa com uma pedra em todas as casas das linhas 1, 2, 7 e 8 e das colunas 1, 2,
7 e 8, sendo 48 pedras no total.*/

#include <stdio.h>

char tabuleiro (){
    int tabuleiroPadrao;

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("* ");
        }
        printf("\n");   
    }
    return tabuleiroPadrao;
}

int main()
{
    int chamaTabuleiro;
    printf("O jogo vai começar.");

    chamaTabuleiro = tabuleiro();

    return 0;
}