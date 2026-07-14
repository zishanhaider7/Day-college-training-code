#include <stdio.h>

    int main(){
    int operator;

    printf("enter 1 for addition \n enter 2 for sub \n enter 3 for multiply \n enter 4 for division \n");

    scanf("%d",&operator);

    switch (operator)
    {
    case 1:{

        int a,b;

        printf("enter first number\n");
        scanf("%d",&a);

        printf("enter second number\n");
        scanf("%d",&b);

        printf("%d + %d  =  %d \n",a,b,a+b);
        

    }
    break;

    case 2:{
        int a,b;

        printf("enter first number\n");
        scanf("%d",&a);

        printf("enter second number\n");
        scanf("%d",&b);

        printf("%d - %d  =  %d \n",a,b,a-b);
    }
        
        break;
    
    case 3:{
        int a,b;

        printf("enter first number\n");
        scanf("%d",&a);

        printf("enter second number\n");
        scanf("%d",&b);

        printf("%d x %d  =  %d \n",a,b,a*b);
    }
    break;

    case 4:{
        int a,b;

        printf("enter first number\n");
        scanf("%d",&a);

        printf("enter second number\n");
        scanf("%d",&b);

        if (b==0){
            printf("b cannot be 0\n");
            
        }
        else{
        printf("%d / %d  =  %d \n",a,b,a/b);
        }
    }
    break;

    default:
        break;
    }
    
    
return 0;
}