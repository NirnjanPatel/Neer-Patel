#include<stdio.h>
int main()
{
    int i ,j,num;
    printf("enter a num\n");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        for ( j = 1; j <=num; j++)
        {
           if (i==1||i==num||j==1||j==2||j==num-1||j==num)
           {
             printf("*");
           }
           else
           printf(" ");
        }
     printf("\n");   
    }
    
}