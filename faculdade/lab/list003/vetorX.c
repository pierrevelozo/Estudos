#include <stdio.h>

int main(void){
    int vetorX[10];

    for(int i = 0; i < 10; i++){
        vetorX[i] = 30;
        printf("%d: %d\n", i + 1, vetorX[i]);
    }
    
    return 0;
}