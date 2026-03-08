#include<stdio.h>
int main()
{
    int a[7]={1,2,2,3,4,4,5};
    int i, j;
    for(i = 0; i <7; i++)
    {
        for(j = i + 1; j <7; j++)
        {
            if(a[i] == a[j])
            {
               printf("Duplicate numebers is :%d\n",a[i]);
            }
        }
    }
    return 0;
}