#include<stdio.h>
int main()
{
    int i, space;
    for(i = 1; i <=3; i++)
    {
        for(space = 1; space < i; space++)
           printf(" ");

           if(i == 3)
               printf("%d", i);
           else
               printf("%d", i);
               
           if(i != 3)
           {
               for(space = 1; space <= (5 - 2*i); space++)
                   printf(" ");
               printf("%d", i);   
           }
           printf("\n");   
    }
    for(i = 2; i >=1; i--)
    {
        for(space = 1; space < i; space++)
            printf(" ");

        printf("%d", i);
        
        for(space = 1; space <= (5 - 2*i); space++)
            printf(" ");

        printf("%d\n", i);    
    }
    return 0;
}