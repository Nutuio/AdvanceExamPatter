#include<stdio.h>
int main()
{
    int n = 9;
    int a = 0, b = 1;
    int c, i;

    printf("%d  %d", a, b);
    for(i = 3; i <=n; i++)
    {
        c = a + b;

        printf("%d", c);
        a = b;
        
        b = c;
    }
    return 0;
}