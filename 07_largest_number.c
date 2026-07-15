#include <stdio.h>

    int main(){
    int a,b;
    printf("enter the first number\n");
    scanf("%d",&a);
    
    printf("enter the second number\n");
    scanf("%d",&b);

    if (a>b)
    {
        printf("first number is greater\n");
        
    }
    else if (b>a){
        printf("second nubmer is greater\n");
        
    }
    else{
        printf("both are equal\n");
        
    }
    
    
    
    
return 0;
}