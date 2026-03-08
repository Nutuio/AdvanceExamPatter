#include<stdio.h>

int main()
{
    int num, i, sum;
    printf("Perfect number are :\n");

    for(num = 1; num <= 10000; num++)
    {
        sum = 0;

        for(i = 1; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            printf("%d", num);
        }
    }
    
    return 0;
}