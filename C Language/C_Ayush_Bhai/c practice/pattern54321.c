#include<stdio.h>
int main()
{
    int i , j, k,m=0;
    for ( i = 1; i <=5; i++)
    {
        for ( k = 0; k<m ; k++)
        {
            printf(" ");
        }
        m++;
        for ( j = 5; j>=i; j--)
        {
          printf("%d ",j);
        }  
        
        printf("\n");
    }
    
} 