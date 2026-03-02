#include<stdio.h>
void Swapv(int *, int *);
int main()
{
    int a = 20, b = 30;
    Swapv(&a,&b);
    printf("a = %d b = %d\n",a,b);
    return 0;
}
void Swapv(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}