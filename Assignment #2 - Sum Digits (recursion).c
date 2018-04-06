#include <stdio.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;
    
}

int sumDigits(int input){ // /10: it removes the rightmost digit, %10: it yields the rightmost digit
    
    if(input / 10 == 0){
        
        return input;
        
    }
    else{
        
        return input % 10 + sumDigits(input / 10);
    
    }
    
}

int main(void) {
    
    int input;
    int input_copy;
    //int count = 0;
    char c;
    
    do{
        
        printf("Type an integer to calculate the sum of all the digits: ");
        
    }while(((scanf("%d%c", &input, &c) != 2 || c != '\n') && clean_stdin()) || input < 0);
    
    input_copy = input;
    
    //counting digits
    /*while(input_copy != 0){
        
        //input_copy = input_copy/10;
        input_copy /= 10;
        ++count;
        
    }*/
    
    printf("%d\n", sumDigits(input));
    
    return 0;
    
}