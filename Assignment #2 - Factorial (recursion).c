#include <stdio.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;
    
}

int factorial(int i){
    
    if(i <= 1){
        
        return 1;
        
    }
    
    return i * factorial(i - 1);
    
}

int main(void) {
    
    int input;
    int result;
    char c;
    
    do{
        
        printf("Type a number to calculate the factorial: ");
        
    }while(((scanf("%d%c", &input, &c) != 2 || c != '\n') && clean_stdin()) || input < 1);
    
    result = factorial(input);
    
    if(result >= 1){
        
        printf("%d\n", result);
        
    }
    else{
        
        printf("It is a really big number to calculate its factorial.\n");
        
    }
    
    return 0;
    
}