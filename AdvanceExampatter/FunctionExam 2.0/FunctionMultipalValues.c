#include<stdio.h>
void calculate(int a, int b, int *sum, int *diff, int *prod)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}
int main()
{
    int x, y;
    int sum, diff, prod;

    printf("Enter a two numbers :");
    scanf("%d %d", &x, &y);

    calculate(x, y, &sum, &diff, &prod);

    printf("sum is : %d\n",sum);
    printf("difference is : %d\n",diff);
    printf("Product is : %d\n", prod);

    return 0; 
}