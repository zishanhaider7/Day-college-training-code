#include <stdio.h>
#include <stdlib.h>

    int main(){
    int*ptr ;
    int n;
    printf("enter the size of the array you want\n");
    scanf("%d",&n);
    
    ptr = (int*)calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the value of the %d array\n",i+1);
        scanf("%d",&ptr[i]);
         
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("the value of the %d array  is %d \n",i+1,ptr[i]);
    
    }
    
return 0;
}