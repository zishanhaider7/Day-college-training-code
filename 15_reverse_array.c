#include <stdio.h>

    int main(){
    int n;
    int temp;
    printf("enter the size of array you want\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element\n");
        scanf("%d",&arr[i]);
        
        
    }
    
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d,",arr[i]);
        
    }
    

return 0;
}