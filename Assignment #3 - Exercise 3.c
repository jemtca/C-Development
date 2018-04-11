#include <stdio.h>

int square(int x){
    
    return x * x;
    
}

int main(void) {
    
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    int size = sizeof(a) / sizeof(a[0]);
    
    for(int i = 1; i <= size; i++){
        
        printf("%i - %i\n", i, square(i));
        
    }
    
    return 0;
    
}