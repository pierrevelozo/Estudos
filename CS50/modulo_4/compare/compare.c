#include <cs50.h>
#include <stdio.h>
#include <string.h>

int cmp(char *a, char *b);

int main(void){
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (cmp(s, t) == 0){
        printf("Same\n");
        return 0;
    }

    printf("Different\n");
    return 1;
}

int cmp(char *a, char *b){
    int i = strlen(a);
    int j = strlen(b);
    int count; 

    if (i > j) j = i;

    for (int i = 0; i < j; i++){
        if (a[i] == b[i]){
            count++;
        }
    }

    if (j == count) return 0;
    return 1;
}