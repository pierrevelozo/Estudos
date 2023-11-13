// Código Incompleto!


#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    //  mensagens de erro.

    int n = strlen(argv[1]);
    bool isdigit;
    for (int i = 0; i < n; i++){
        if (isdigit(argv[1][i])){
            isdigit = true;
        }
    }
    if (argc != 2 || isdigit){
        printf("Uso: ./ chave de substituição.\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26){
        printf("A chave deve conter 26 caracteres.\n");
        return 1;
    }
    
    //  Obter texto.

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    char alpha[26] = {'a', 'b', 'c','d', 'e', 'f','g', 'h', 'i','j', 'k', 'l','m', 'n', 'o','p', 'q', 'r','s', 't', 'u','v', 'w', 'x','y', 'z'};
    int valor;
    char ciphertext[strlen(plaintext)];
    int i;
    int *ptr;
    ptr = &i;

    for (int a = 0; a < n; a++){
        for (i = 0; i < 26; i++){
            if (plaintext[a] == alpha[i]){
                valor[ptr] = alpha[i];
            }
        }
    }
    
    printf("%s", ciphertext);

    printf("\n");
}