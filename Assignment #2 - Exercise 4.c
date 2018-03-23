#include <stdio.h>

int main(void) {
    
    int factorial;
    
    for(int i = 1; i <= 7; i++){
        
        factorial = 1;
        
        for(int j = i; j > 1; j--){

            factorial = factorial * j;
            
        }
        
        printf("Factorial of %d: %d\n", i, factorial);
        
    }
    
    return 0;
    
}