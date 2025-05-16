#include <stdio.h>
#include <stdlib.h>

void moverTorre (int casas) 
{
    if (casas > 0) 
    {
        printf("Direita \n"); // Imprime a direção do movimento
        moverTorre(casas - 1); // Chama a função recursivamente
    }
}

void moverBispo (int casas) 
{
    if (casas > 0) 
    {
        printf("Cima \n"); // Imprime a direção do movimento para cima
        printf("Direita \n"); // Imprime a direção do movimento para a direita
        moverBispo(casas - 1); // Chama a função recursivamente
    }
}

void moverRainha (int casas) 
{
    if (casas > 0) 
    {
        printf("Esquerda \n"); // Imprime a direção do movimento
        moverRainha(casas - 1); // Chama a função recursivamente
    }
}

int main (){

    /*
    int torre = 0, bispo = 0, rainha = 0, cavalo = 0; // Variáveis para armazenar a posição da torre, bispo e rainha

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

    // Mover o cavalo duas caras para baixo e uma casa para a esquerda
    printf("Movimentação do cavalo \n");
    for (int cavalo = 0; cavalo < 1; cavalo++) // Estrutura de repetição
    {
        for (int cavaloacima = 0; cavaloacima < 2; cavaloacima++) // Estrutura de repetição
        {
            printf("Cima \n"); // Imprime a direção do movimento para cima duas vezes
        }

        printf("Esquerda \n"); // Imprime a direção do movimento para a esquerda uma vez

    }
    */

    printf("***BEM VINDO AO JOGO DE XADREZ***\n\n");

    printf("Movimentação da torre \n");
    moverTorre(5); // Chama a função para mover a torre 5 casas

    printf("Movimentação do bispo \n");
    moverBispo(5); // Chama a função para mover o bispo 5 casas

    printf("Movimentação da rainha \n");
    moverRainha(8); // Chama a função para mover a rainha 8 casas
    
    // Mover o cavalo duas caras para baixo e uma casa para a esquerda
    printf("Movimentação do cavalo \n");
    for (int cavalo = 0; cavalo < 1; cavalo++) // Estrutura de repetição
    {
        for (int cavaloacima = 0; cavaloacima < 2; cavaloacima++) // Estrutura de repetição
        {
            printf("Cima \n"); // Imprime a direção do movimento para cima duas vezes
        }

        printf("Esquerda \n"); // Imprime a direção do movimento para a esquerda uma vez

    }

    printf("*** FIM DO JOGO DE XADREZ ***\n\n");

    return 0;

}