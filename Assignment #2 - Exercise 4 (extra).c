#include <stdio.h>
#include <stdlib.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;

}

int main(void) {
    
    int input;
     int result = 1;
    char c;
    
    do{
        
        printf("Type a number to calculate the factorial: ");
        
    }
    while(((scanf("%d%c", &input, &c) != 2 || c != '\n') && clean_stdin()) || input < 1);
    
    for(int i = input; i > 1; i--){
        
        result = result * i;
        
    }
    
    if(result >= 1){
    
        printf("Factorial of %d: %d\n", input, result);
        
    }
    else{
        
        printf("It is a really big number to calculate its factorial.\n");
        
    }
    
    return 0;
    
}