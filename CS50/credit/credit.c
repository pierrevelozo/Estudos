// Não terminado!

#include "cs50.h"
#include <stdio.h>

long obter_num(void);


int main(void)
{
    long num = obter_num();

    long result1 = num % 1000;

    long result2 = num % 100;

    long result3 = result1 - result2;
    
    printf("%li\n", result3);

}


long obter_num(void)
{
    long n;
    do
    {
        n = get_long("Número: ");
    } 
    while (false);
    
    return n;
}