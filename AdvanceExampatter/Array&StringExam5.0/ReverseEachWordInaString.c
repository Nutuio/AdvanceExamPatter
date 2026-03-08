#include<stdio.h>
#include<string.h>
int main()
{
    char name[20] = "hello world from c";
    int i;
    for(i = 18; i >=0; i--)
    {
        printf("ReveseString is : %d",name[i]);
    }
    return 0;
}
