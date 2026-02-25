#include<stdio.h>
int rec(int n);
int main()
{
    int a,fact;
    printf("Enter a number :");
    scanf("%d",&a);
    fact = rec(a);
    printf("the Factorial is :%d\n",fact);
    return 0;
}
int rec(int x)
{
    int f;
    if(x == 1)
      return 1;
    else
    f = x * rec(x - 1);
    return (f);
}