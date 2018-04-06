#include <stdio.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;
    
}

int bunnyEars2(int i){
    
    if(i == 0){ //base case
        
        return 0;
        
    }
    
    if(i % 2){ //odd bunnies
        
        return 3 + bunnyEars2(i - 1);
        
    }
    else{ //even bunnies
        
        return 2 + bunnyEars2(i - 1);
        
    }
    
}

int main(void) {
    
    int input;
    char c;
    
    do{
        
        printf("Type how many bunnies in line: ");
        
    }while(((scanf("%d%c", &input, &c) != 2 || c != '\n') && clean_stdin()) || input < 0);
    
    printf("%d\n", bunnyEars2(input));
    
    return 0;
    
}