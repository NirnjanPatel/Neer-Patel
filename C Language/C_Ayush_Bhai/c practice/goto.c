#include<stdio.h>
int main()
{
        abc:
        {
            printf("hello\n");
        }
    int i;
    for ( i = 1; i <=10; i++)
    {
        if (i==5)
        {
            goto abc;
        }
            printf("%d",i);
    }
        
         
}