#include <stdio.h>

int main(void) {
    
    float sum = 0;
    int count = 0;
    
    for(int i = 1; i <= 10; i++){
        
        sum = sum + (i*i);
        count++;
        
    }
    
    sum = sum /count;
    
    printf("Sum result: %f\n", sum);
    
    return 0;
    
}