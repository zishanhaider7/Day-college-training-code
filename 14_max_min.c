#include <stdio.h>

    int main(){
    int n;
    printf("enter the size of array you want\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element\n");
        scanf("%d",&arr[i]);
        
    }
    
    int min=arr[0];
    int max=arr[0];
    for (int i = 1; i < n; i++)
    {
     if (max<arr[i])
     {
        max=arr[i];
     }
     else if (min>arr[i])
     {
        min=arr[i];
     }
     
    }
    
    printf("greatest number is %d\n",max);
    printf("smallest  number is %d\n",min);
    
return 0;
}