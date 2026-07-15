#include <stdio.h>

    int main(){
    int n;
    printf("enter the number here\n");
    scanf("%d",&n);

    if (n>0)
    {
        printf("Number is positive\n");
        
    }
    else if (n<0)
    {
        printf("number is negative\n");
        
    }
    else{
        printf("number is 0\n");
        
    }
    
return 0;
}