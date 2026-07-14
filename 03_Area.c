#include <stdio.h>

    int main(){
    int shape;

    printf("enter 1 for square \n enter 2 for rectangle \n enter 3 for circle \n ");

    scanf("%d",&shape);

    switch (shape)
    {
    case 1:{

        float side;

        printf("enter side of the square\n");
        scanf("%f",&side);

        printf("Area of the square is %.2f \n",side*side);

    }
    break;

    case 2:{
        int a,b;

        printf("enter length\n");
        scanf("%d",&a);

        printf("enter bradth\n");
        scanf("%d",&b);

        printf("Area of the rectangle is %d",a*b);
    }
        
        break;
    
    case 3:{
        float a;

        printf("enter radius of the circle \n");
        scanf("%f",&a);

        printf("Area of the circle is %.2f \n",3.14*a*a);
        
    }
    break;

    default:
        break;
    }
    
    
return 0;
}