#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;
    
}

void randrange(int n){ //random numbers range: 1 to n
    
    srand((unsigned int)time(NULL));
    
    int count = 0;
    int x = rand() % 10 + 1; // how many random numbers
   
    if(x == 1){
    
        printf("\nGenerating %d random number... (range 1 - %d)\n\n", x, n);
    
    }
    else{
        
        printf("\nGenerating %d random numbers... (range 1 - %d)\n\n", x, n);
        
    }
    
    for(int i = x; i > 0; i--){
        
        printf("Random number %d: %d.\n", ++count, rand() % n + 1);
        
    }
    
}

void randrange2(int m, int n){ //random numbers range: m to n
    
    srand((unsigned int)time(NULL));
    
    int count = 0;
    int x = rand() % 10 + 1; // how many random numbers
    
    if(m == n){
        
        if(x == 1){
        
            printf("\nGenerating %d random number... (minimum and maximum numbers are the same)\n\n", x);
        
        }
        else{
            
            printf("\nGenerating %d random numbers... (minimum and maximum numbers are the same)\n\n", x);
            
        }
        
        for(int i = x; i > 0; i--){
            
            printf("Random number %d: %d.\n", ++count, rand() % (n - m + 1) + m);
            
        }
        
    }
    else{
        
        if(x == 1){
        
            printf("\nGenerating %d random number... (range %d - %d)\n\n", x, m, n);
        
        }
        else{
            
            printf("\nGenerating %d random numbers... (range %d - %d)\n\n", x, m, n);
            
        }
        
        for(int i = x; i > 0; i--){
            
            printf("Random number %d: %d.\n", ++count, rand() % (n - m + 1) + m);
            
        }
        
    }
    
}

int main(void) {
    
    int input;
    char c;
    
    int m;
    int n;
    
    do{
    
        printf("Type the maximum range to generate random numbers: ");
        
    }while(((scanf("%d%c", &input, &c) != 2 || c != '\n') && clean_stdin()) || input < 1);
    
    randrange(input);
    
    printf("\n");
    
    do{
        
        printf("Type the minimum range to generate random numbers: ");
        
    }while(((scanf("%d%c", &m, &c) != 2 || c != '\n') && clean_stdin()) || m < 1);
    
    do{
        
        printf("Type the maximum range to generate random numbers: ");
        
    }while(((scanf("%d%c", &n, &c) != 2 || c != '\n') && clean_stdin()) || n < m);
    
    randrange2(m,n);
    
    printf("\n");
        
    return 0;
    
}