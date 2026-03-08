#include<stdio.h>
#include<string.h>
int main()
{
    int name[4]= "madam";
    int l, i, rev, digit, original;
    original = l;
    l = strlen(name);
    for(i = 0; i <l; i++)
    {
        digit = l % 10;
        rev   = rev * 10 + digit;
        l = l /  10;
    }
    if(original == rev)
    {
        printf("it is a Palindrome number ");
    }
    else
    {
        printf("it is not a Palindrome number");
    }
    return 0;
}