#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char c = get_char("Você aceita? ");

    // Verifica se foi aceito.

    if (c == 'y' || c == 'Y')
    {
        printf("Aceito.\n"); 
    }
    
    else if (c == 'n' || c == 'N')
    {
        printf("Não aceito.\n");
    }
}