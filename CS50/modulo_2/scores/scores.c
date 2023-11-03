#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];

    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");
    scores[0] = get_int("Score: ");

    printf("Média: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}