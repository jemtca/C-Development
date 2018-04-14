#include <stdio.h>

void celsius(int x[], int size){ // °C = 5/9 * (°F - 32)
    
    for(int i = 0; i < size; i++){
        
        printf("%d Fahrenheit degrees = %.4f Celcius degrees.\n", x[i], 5.0/9.0 * (x[i] - 32));
        
    }
    
}

int main(void) {
    
    int x[] = {-40,-30,-20,-10,0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220};
    
    int size = sizeof(x)/sizeof(int);
    
    celsius(x, size);
    
    return 0;
    
}