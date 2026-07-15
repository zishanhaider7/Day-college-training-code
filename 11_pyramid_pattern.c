#include <stdio.h>

    int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int space = 3; space >i ; space--)
        {
          printf(" ");
          
        }
        for (int star = 0; star<(2*i+1); star++)
        {
            printf("*");
            
        }
        printf("\n");
        
        
        
    }
    
return 0;
}