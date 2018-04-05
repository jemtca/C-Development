#include <stdio.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;
    
}

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
    char c;
    
    do{
        
        printf("Type a number to calculate its fibonacci secuence: ");
        
    }while(((scanf("%d%c", &input, &c) != 2 || c != '\n') && clean_stdin()) || input < 0);
    
    for(int i = 0; i <= input; i++){
        
        printf("%d",fibonacci(i));
        
        if(i < input){
            
            printf(", ");
            
        }
        else{
            
            printf(".\n");
            
        }
        
    }
    
    return 0;
    
}