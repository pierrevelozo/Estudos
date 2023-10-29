#include "cs50.h"
#include <stdio.h>

int height(void);

int main(void)
{
    int n = height();

    for (int x = 0; x < n; x++) // Número de linhas
    {

        for (int z = n - 1; z > x; z--) // Número de espaços
        {
            printf(" ");
        }

        for (int y = 0; y < x + 1; y++) // Número de blocos
        {
            printf("#");
        }

        printf("  ");

        for (int y = 0; y < x + 1; y++) // Número de blocos
        {
            printf("#");
        }

        printf("\n");
    }
}

int height(void)
{
    int height;

    do
    {
        height = get_int("Altura da pirâmide: ");
    }
    while(height < 1 || height > 8);

    return height;
}
