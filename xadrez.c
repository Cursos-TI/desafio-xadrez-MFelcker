#include <stdio.h>
#include <stdlib.h>

int main (){

    int torre = 0, bispo = 0, rainha = 0; // Variáveis para armazenar a posição da torre, bispo e rainha

    // Mover a torre 5 casas para a direita
    printf("Movimentação da torre \n");
    for (int torre = 0; torre < 5; torre++) // Estrutura de repetição
    {
        printf("Direita \n"); // Imprime a direção do movimento
    }

    // Mover o bispo cinco casas para cima e à direita
    printf("Movimentação do bispo \n");
    while (bispo < 5) // Estrutura de repetição
    {
        printf("Cima \n"); // Imprime a direção do movimento para cima
        printf("Direita \n"); // Imprime a direção do movimento para a direita
        bispo++; // Incrementa a variável bispo
    }

    // Mover a rainha 8 casas para a esquerda
    printf("Movimentação da rainha \n");
    do // Estrutura de repetição
    {
        printf("Esquerda \n"); // Imprime a direção do movimento
        rainha++; // Incrementa a variável rainha
    } while (rainha < 8); // Condição de parada da repetição

    return 0;

}