#include<stdio.h>
int main()
{
    int i , j ,n ,k;
    printf("enter the value of n \n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( k = 1; k<i; k++)
        {
            printf(" ");
        }
        
        for ( j = n; j >=i; j--)
        {
        printf("*");

        }
        printf("\n");
    }
        for ( i = n-1; i >=1; i--)
    {
        for ( k = 1; k <i; k++)
        {
            printf(" ");
        }
        
        for ( j = n; j >=i; j--)
        {
        printf("*");

        }
        printf("\n");
    }
}


// *****
//  ****
//   ***
//    **
//     *
//    **
//   ***
//  ****
// *****