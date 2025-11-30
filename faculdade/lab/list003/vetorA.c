#include <stdio.h>

int main(void){
    int vetorA[10];

    for(int i = 1; i < 10 + 1; i++){
        vetorA[i] = 10 * i;
        printf("%d: %d\n", i, vetorA[i]);
    }
    
    return 0;
}