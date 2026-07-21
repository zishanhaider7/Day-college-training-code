// wap to search given element in array

#include <stdio.h>

int main()
{
    int arr[] = {3, 4, 6, 2, 3};
    int key = 6;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            printf("Address = %p\n", &arr[i]);
        }
    }

    return 0;
}