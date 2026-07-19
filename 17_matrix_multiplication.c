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


    // matrix multiplicaiton start from here
  for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            for (int k = 0; k < column ; k++)
            {
              c[i][j]+=a[i][k]*b[k][j];

            }
            
            
        }
    }


for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d",c[i][j]);
            
        }
        
    printf("\n");
    }

return 0;
}