#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1; i <=3; i++)
    {
        for(j = 1; j < i; j++)
            printf(" ");
            
            if(i == 1)
                printf("*   *   *");
            else if(i == 2)
                printf("* * * *");
            else
                printf("*   *");

             printf("\n");
    }
    return 0;
}