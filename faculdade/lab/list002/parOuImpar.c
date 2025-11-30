#include <stdio.h>
#include <stdbool.h>

int main(void){
    int valor;
    bool valido;
    do
    {
        valido = false;
        printf("Forneça um valor positivo: ");
        scanf("%d", &valor);
        if (valor > 0 && valor % 2 == 0)
        {
            printf("Par\n");
            valido = true;
        }
        else if (valor > 0 && valor % 2 == 1){
            printf("Ímpar\n");
            valido = true;
        }
    } while (valido);
    return 0;
}