#include<stdio.h>
int sumArray(int arr[],int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[100], n, i, result;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    result = sumArray(arr, n);

    printf("Sum is %d", result);

    return 0;
}