#include <stdio.h>

int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }

    if (count == 2)
    {
        printf("%d is prime\n",n);
    }
    else if (count > 2)
    {
        printf("%d is not prime\n",n);
    }

    return 0;
}