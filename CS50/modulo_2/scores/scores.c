#include <stdio.h>
#include <cs50.h>

float average(int lenght, float array[]);

const int TOTAL = 3;

int main(void)
{
    float scores[TOTAL];

    for (int n = 0; n < TOTAL; n++)
    {
        scores[n] = get_float("Score: ");
    }
    
    printf("Average: %.2f\n", average(TOTAL, scores));
}

float average(int lenght, float array[])
{
    float sum = 0;
    
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }
    return sum / lenght;
}