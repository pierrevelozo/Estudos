#include <stdio.h>

int main(void){
    int soma = 0;
    for (int i = 51; i > 1; i--)
    {
        if (i % 2 == 0){
            printf("%d é par\n", i);
            soma += i;
        }
    }
    printf("Soma: %d\n", soma);

    return 0;
}