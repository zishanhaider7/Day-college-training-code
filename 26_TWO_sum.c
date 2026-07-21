#include <stdio.h>

int main()
{
    int n,target;
    printf("enter the size of n\n");
    scanf("%d",&n);
    int arr[n];

    
    printf("enter the target\n");
    scanf("%d",&target);
    
    

    printf("enter the valueof the array\n");
    
    // taking input of an array
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
      
        
    }


    // finding target       
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==target){
                printf("we get the target %d  + %d\n",arr[i],arr[j]);
                break;
            }
        
        }
        
    }
    
    


    return 0;
}