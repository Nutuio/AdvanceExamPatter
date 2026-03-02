#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *Sum, i,n, S=0;
      n= &arr;
     printf("Enter a numbers :");
     for(i = 0; i <n; i++)
     {
        scanf("%d",&arr[i]);
        *Sum = S + arr[i];
     }
     printf("The Sum is : %d\n",*Sum);
     return 0;
}