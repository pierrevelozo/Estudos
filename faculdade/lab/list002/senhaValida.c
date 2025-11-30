#include <stdio.h>
#include <stdbool.h>

int main(void){
    int senhaValida = 2807;
    int senhaInformada;
    bool senhaIncorreta = true;

    do {
        printf("Informe a senha: ");
        scanf("%d", &senhaInformada);
        if (senhaInformada == senhaValida)
        {
            senhaIncorreta = false;
        }
        else printf("Senha incorreta!\n");
    } while (senhaIncorreta);
    printf("Senha correta.\n");

    return 0;
}