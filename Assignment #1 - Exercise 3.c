#include "stdio.h"

int main(void) {
  
  int i;
  
  for(int i= 1; i <=10; i++){
    
    printf("%d", i);
    printf("\t");
    printf("%d", i*i);
    printf("\n");
    
  }

  return 0;
  
}