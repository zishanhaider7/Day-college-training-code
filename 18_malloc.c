//  in DMA memory allocate in   heap segment

#include <stdio.h>
#include <stdlib.h>

    int main(){
    int* ptr;
    int* temp;
    int n;
    printf("enter the size of the array you want\n");
    scanf("%d",&n);
    
    
    ptr = (int*)malloc(n*sizeof(int));
    temp=ptr;
    if (temp==NULL){
        printf("nomemory is alllocated\n");
        
    }
    else{
        for (int i = 0; i < n; i++)
        {
            printf("enter the value of %d array\n",i+1);
            scanf("%d",temp);
            temp++;
            
        }
        temp=ptr;
    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d array is  %d\n",i+1,*temp);
        temp++;
        
    }
    free(ptr);
    
}
    return 0;
}