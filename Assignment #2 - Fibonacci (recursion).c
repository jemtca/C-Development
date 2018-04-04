#include <stdio.h>

int fibonacci(int i){
    
    if(i == 0){
        
        return 0;
        
    }
    
    if(i == 1){
        
        return 1;
        
    }
    
    return fibonacci(i - 2) + fibonacci(i - 1);
    
}

int main(void) {
    
    int input;
    
    printf("Type a number to calculate its fibonacci secuence: ");
    scanf("%d", &input);
    
    for(int i = 0; i < input; i++){
        
        printf("%d",fibonacci(i));
        
        if(i < input - 1){
        
            printf(", ");
        
        }
        else{
            
            printf(".\n");
            
        }
        
    }
    
    return 0;
    
}