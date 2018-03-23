#include <stdio.h>

int main(void) {
    
    for(int i = 1; i <= 10; i++){
        
        if(i % 2){
            
            printf("Number %d is odd.\n", i);
            
        }
        else{
            
            printf("Number %d is even.\n", i);
            
        }
        
    }

    return 0;
    
}