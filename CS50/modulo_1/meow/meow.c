#include <stdio.h>
#include <cs50.h>

int meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

int main(void)
{
    int n = get_int("Repetir quantas vezes? ");

    meow(n);
}