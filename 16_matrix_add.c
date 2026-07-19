#include <stdio.h>

    int main(){
        int row,column;
        printf("enter the size of the column you want\n");
        scanf("%d",&row);
        printf("enter the size of the row you want\n");
        scanf("%d",&column);
        
        int a[row][column];
        int b[row][column];
        int c[row][column];

    


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter the value of 1st matrix [%d][%d] \n",i,j);
            scanf("%d",&a[i][j]);
            
        }
        
    }
printf("now second matrix start\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter the value of 2nd matrix [%d][%d] \n",i,j);
            scanf("%d",&b[i][j]);
            
        }
        
    }


    // now we add the two matrix

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
           printf("%d",c[i][j]);
        
        }
        printf("\n");
        
    }
    
    
return 0;
}