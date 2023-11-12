#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void)
{
    string text = get_string("Text: ");

    int letras, espacos = 0, pontos;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalnum(text[i]))
        {
            letras++;
        }
        if (text[i] == ' ')
        {
            espacos++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            pontos++;
        }
    }

    float palavras = espacos + 1;
    float L = (letras / palavras) * 100;
    float S = (pontos / palavras) * 100;

    float grade = 0.0588 * L - 0.296 * S - 15.8;
    
    printf("\nGrade: %.0f\n", round(grade));

    return 0;
}