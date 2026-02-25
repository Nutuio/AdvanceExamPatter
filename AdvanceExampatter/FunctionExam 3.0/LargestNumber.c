#include<stdio.h>
int main()
{
    int arr[5]={1,2,5,4,6};
    int largestnumber,*ptr,i;
    ptr = arr;
    largestnumber = *ptr;
    for(i = 0; i < 5; i++)
    {
        if(*ptr > largestnumber)
        {
            largestnumber = *ptr;
        }
        ptr++;
    }
    printf("largestnumber is :%d\n",largestnumber);
    return 0;
}