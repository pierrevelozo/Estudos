#include <stdio.h>

int main(void){
    int soma = 0;
    for (int i = 1000; i < 1999; i++)
    {
        if (i % 11 == 5){
            printf("%d / 11 = %d\n", i, (i % 11));
        }
    }

    return 0;
}