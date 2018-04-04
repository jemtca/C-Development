#include <stdio.h>

int factorial(int i){
    
    if(i <= 1){
        
        return 1;
        
    }
    
    return i * factorial(i - 1);
    
}

int main(void) {
    
    int input;
    int result;
    
    printf("Type a number to calculate the factorial: ");
    scanf("%d",&input);
    
    result = factorial(input);
    
    if(result >= 1){
    
        printf("%d\n", result);
        
    }
    else{
        
        printf("It is a really big number to calculate its factorial.\n");
        
    }
    
    return 0;
    
}