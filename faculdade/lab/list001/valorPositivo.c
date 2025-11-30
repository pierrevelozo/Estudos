#include <stdio.h>

int main(void){
    int valor;
    printf("Atribua um valor: ");
    scanf("%i", &valor);

    if (valor <= 0){
        valor = valor * -1;
        printf("%i sendo positivo", valor);
        return 0;
    }
    printf("%i já é positivo.", valor);
    return 0;
}
