#include <stdio.h>

    int main(){
    float c,f;
    printf("enter the value of the celsius\n");
    scanf("%f",&c);

    f=  (c* 9/5) + 32;

    printf("%.2f celcius =  %.2f fahrenhiet\n",c,f);
    
    
    
return 0;
}