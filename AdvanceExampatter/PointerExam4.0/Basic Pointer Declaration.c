#include<stdio.h>
int main()
{
    int i = 4;
    int *j;
    j=&i;
    printf("Address is : %d\n",&i);
    printf("Address  is : %d\n",&j);
    printf("Value  is : %d\n",j);
    printf("Value is : %d\n",i);
    printf("Value is : %d\n",*(&i));
    printf("value is : %d\n",*j);
    return 0;
}