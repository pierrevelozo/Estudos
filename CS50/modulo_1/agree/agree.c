#include <stdio.h>
#include "cs50.h"

int main(void)
{
    bool aceito = false;

    do
    {
        char c = get_char("Você aceita? ");

        // Verifica se foi aceito.

        if (c == 'y' || c == 'Y')
        {
            printf("Aceito.\n");
            aceito = true;
        }

        else if (c == 'n' || c == 'N')
        {
            printf("Não aceito.\n");
        }
    }
    while (aceito == false);
}