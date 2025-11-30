#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Faça um algoritmo que calcule a média dos elementos da diagonal principal de uma matriz 10 X 10 de inteiros.

int main(void)
{
    int matriz[10][10];
    int somador = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Matriz gerada aleatoriamente:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                somador += matriz[i][j];
            }
        }
    }

    int media = somador / 10;

    printf("Média dos elementos da diagonal principal da matriz 10 X 10:\n %i\n", media);    

    return 0;
}