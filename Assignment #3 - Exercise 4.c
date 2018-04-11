#include <stdio.h>

int clean_stdin(){
    
    while (getchar() != '\n');
    
    return 1;
    
}

void printnchars(char ch, int n){
    
    for(int i = 0; i < n; i++){
        
        if(i < n -1){
            
            printf("%c, ", ch);
        
        }
        else{
            
            printf("%c.\n", ch);
            
        }
        
    }
    
}

int main(void) {
    
    char ch;
    char c;
    int n;
    
    do{
        
        printf("Type a single char: ");
        
    }while(((scanf("%c%c", &ch, &c) != 2 || c != '\n') && clean_stdin()) || ((ch < 'a' || ch > 'z') && (ch < 'A' || ch > 'Z')));
    
    do{
        
        printf("Type the number of times you would like to print it: ");

    }while(((scanf("%d%c", &n, &c) != 2 || c != '\n') && clean_stdin()) || n < 0);
    
    printnchars(ch, n);
    
    return 0;
    
}