#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    //  Mensagem de erro.

    if (argc != 2 || isalpha(argv[1][0]))
    {
        printf("Erro: Insira corretamente os argumentos de linha de comando. Use:  ./caesar key.\n\n");
        return 1;
    }
    if (argv[1][0] <= '0' || argv[1][0] >= '2' && argv[1][1] >= '6')
    {
        printf("Erro: Não é possível criptografar com chave %c%c. Você pode usar entre 1 e 25.\n", argv[1][0], argv[1][1]);
        return 2;
    }

    //  Input de texto.

    string text = get_string("\nInput: ");
    printf("Output: ");

    //  Calculando chave.

    int key = argv[1][0] - 48;

    if (argv[1][1] > 0)
    {
        key = key * 10 + (argv[1][1] - 48);
    }

    // [Fim] Calculando chave.

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                text[i] = tolower(text[i]);
            }

            text[i] += key;

            // [Início] Corrigindo bugs. 

            if (text[i] + key >= '{' || text[i] + key <= 0)
            {
                text[i] -= 26;
                if (!(text[i] >= 'a' && text[i] <= 'z'))
                {
                    text[i] += 26;
                }
            }

            // [Fim] Corrigindo bugs.
            
            printf("%c", text[i]);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n\n");

    return 0;
}