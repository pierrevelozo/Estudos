#include <stdio.h>

int main(void){
    int vetorB[10];

    for(int i = 1; i < 10 + 1; i++){
        if (i % 2 == 0)
        {
            vetorB[i] = 20;
        }
        else vetorB[i] = 10;
        
        printf("%d: %d\n", i, vetorB[i]);
    }
    
    return 0;
}