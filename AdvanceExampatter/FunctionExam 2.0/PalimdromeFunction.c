#include<stdio.h>
int Palimdrome(int n)
{
    int Rev = 0, digit, original;

    original = n;

    while(n > 0)
    {
        digit = n % 10;
        Rev = Rev *  10 + digit;
        n = n / 10;
    }
    if(original == Rev)
        return 1;
    else
        return 0;    
}
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d",&num);
    
    if(Palimdrome(num))

        printf("Palimdrome");
    else
        printf("Not palimdrome");
    return 0;
}