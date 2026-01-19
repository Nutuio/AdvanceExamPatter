#include <stdio.h>

int main()
{
    int i, j, n = 5;

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            for(j = 1; j <= n; j++)
                printf("%d ", j);
        }
        else if(i == n)
        {
            for(j = n; j >= 1; j--)
                printf("%d ", j);
        }
        else
        {
            printf("%d ", i);

            for(j = 1; j <= (n - i - 1) * 2; j++)
                printf(" ");

            printf("%d", n - i + 1);
        }
        printf("\n");
    }
    return 0;
}