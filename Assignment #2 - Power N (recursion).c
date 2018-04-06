#include <stdio.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;
    
}


int powerN(int base, int exponent){
    
    if(exponent == 1){
        
        return base;
        
    }
    
    return base * powerN(base, exponent - 1);
    
}

int main(void) {
    
    int base;
    int exponent;
    char c;
    
    do{
        
        printf("Type the base: ");
        
    }while(((scanf("%d%c", &base, &c) != 2 || c != '\n') && clean_stdin()) || base < 1);
    
    do{
        
        printf("Type the exponent: ");
        
    }while(((scanf("%d%c", &exponent, &c) != 2 || c != '\n') && clean_stdin()) || exponent < 1);
    
    printf("%d\n", powerN(base, exponent));
    
    return 0;
    
}