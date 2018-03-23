#include <stdio.h>

int main(void) {
    
    int count = 0;
    
    for(int i = 1; i <= 10; i++){
        
        if(i > 3){
            
            count++;
            
        }
        
    }
    
    printf("Numbers greater than 3 (range: 1 - 10): %d\n\n", count);
    
    return 0;
    
}