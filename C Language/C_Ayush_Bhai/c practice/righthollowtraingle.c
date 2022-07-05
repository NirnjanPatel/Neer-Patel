#include<stdio.h>
int main()
{
    int  n,i,j;
    printf("enter a number\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)   //i==1   i=2
    {
        for ( j = 1; j <=i; j++)    //j=1   j=2 
        {
            if (j==1||i==j||i==n)  //2=2
            {
                printf("*");
            }
            else
            printf(" ");
            
        }
       printf("\n"); 
    }
    
}