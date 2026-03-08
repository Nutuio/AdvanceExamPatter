#include<stdio.h>
int main()
{
    int a[6]={12, 35, 1, 10, 34, 1};
    int i, j, t;
    for(i = 0; i <6; i++)
    {
        for(j = i + 1; j <6; j++)
        {
            if(a[i] > a[j])
           {
              t = a[i];
              a[i] = a[j];
              a[j] = t;
           }
        }
    }
    printf("SecondLargest number is : %d",a[4]);
    return 0;
}