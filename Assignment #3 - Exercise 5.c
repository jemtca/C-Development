#include <stdio.h>

void factorial(int x[], int size){
    
    for(int i = 0; i < size; i++){
        
        int result = 1;
        
        for(int j = x[i];  j > 0; j--){
            
            result = result * j;
            
        }
        
        printf("Factorial of %d is: %d.\n", x[i], result);
        
    }
    
}

int main(void) {
    
    int x[] = {1,2,3,4,5,6,7}; // 1- 7
    //int x2[] = {1,2,3,4,5,6,7,8,9,10}; // 1 - 10
    
    int size = sizeof(x) / sizeof(int);
    
    factorial(x, size);
    
    return 0;
    
}