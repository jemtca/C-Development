#include <stdio.h>

int main(void) {
    
    int result = 0;
    int size;
    int a[] = {1,2,3,4,5,6};
    
    //getting the size of the array
    size = sizeof(a) / sizeof(int);
    
    for(int i = 0; i < size; i++){
        
        result = result + a[i];
        
    }
    
    printf("The sum of all the elements in the array is: %d\n", result);
    
    return 0;
    
}