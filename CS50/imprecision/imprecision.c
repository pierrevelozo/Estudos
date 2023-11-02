#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double x = get_float("x: ");
    double y = get_float("y: ");
    	
    printf("%.50f\n", x / y);
}