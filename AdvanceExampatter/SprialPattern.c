#include<stdio.h>
int main()
{
    int n = 4;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;
    int i;
    while(num <=(n * n))
    {
        for(i = left; i <=right; i++)
           printf("%4d", num++);
        printf("\n");
        top++;
        
        for(i = top; i <=bottom; i++)
           printf("%4d\n", num++);
        right--;
        
        for(i = right; i >=left; i--)
           printf("%4d", num++);
        printf("\n");
        bottom--;

        for(i = bottom; i >=top; i--)
           printf("%4d\n", num++);
        left++;   
    }
    return 0; 
}