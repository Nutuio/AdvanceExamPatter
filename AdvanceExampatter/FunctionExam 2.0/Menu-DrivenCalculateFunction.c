#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return (float)a / b;
}
int main()
{
    int choice, x, y;


    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multipal\n");
    printf("4.Division\n");

    printf("Enter choice:");
    scanf("%d",&choice);

    printf("Enter two numbers:");
    scanf("%d %d",&x, &y);

    if(choice == 1)
        printf("Result = %d", add(x,y));
    else if(choice == 2)
        printf("Result = %d",sub(x,y));
    else if(choice == 3)
        printf("Result = %d",mul(x,y));
    else if(choice == 4)
        printf("Result = %f",div(x,y));
    else
        printf("Wrong choice");
    
    return 0;    
}