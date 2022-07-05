#include<stdio.h>
int main()
{
    int i,n ,j;
    printf("enter the no\n");
    scanf("%d",&n);
    for ( i = 1; i <=n;i++)
    {
        for ( j = n+1-i; j>=1; j--)
        {
            printf("%d",j);

        
        }
        printf("\n");
    }
    
}