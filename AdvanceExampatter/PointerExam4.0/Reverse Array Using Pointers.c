#include<stdio.h>
int main()
{
    int arr[5]={6,5,3,2,1};
    int *reverse;
    *reverse = &arr;
    printf("the reverse is : %d\n",*reverse);
    return 0;
}
