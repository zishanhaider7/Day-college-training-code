#include <stdio.h>

    int main(){

    int z,h,temp;

    printf("enter the first number \n");
    scanf("%d",&z);

    printf("enter the second number \n");
    scanf("%d",&h);

    temp=z;
    z=h;
    h=temp;

    printf("after swapping \n z= %d  \n h= %d  \n",z,h);
    

    
    
    
    
return 0;
}