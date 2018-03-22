#include "stdio.h"
#include "string.h"

int main(void) {
  
  char input[10] = "*";
  
  for(int i= 0; i <10; i++){
    
    printf("%s", input);
    printf("\n");
    strcat(input,"*");
    
  }

  return 0;
  
}