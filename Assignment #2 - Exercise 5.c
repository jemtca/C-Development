#include <stdio.h>

int main(void) {
    
    int result;
    int first = 0;
    int second = 1;
    
    printf("The first 10 Fibonacci numbers: ");
    
    for(int i = 0; i < 10; i++){
        
        if(i == 0){
            
            result = first;
            printf("%d", result);
            
        }
        else if(i == 1){
            
            result = second;
            printf("%d", result);
            
        }
        else{
            
            result = first + second;
            first = second;
            second = result;
            printf("%d", result);
            
        }
        
        if(i < 9){
        
            printf(", ");
        
        }
        else{
            
            printf(".\n");
            
        }
        
    }
    
    
    return 0;
    
}