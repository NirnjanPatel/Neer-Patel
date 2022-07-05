#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumrows,sumcolumn;
    printf(" enter the value of array\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    for ( i = 0; i < 3; i++)
    {
        sumrows=sumcolumn=0;
        for ( j = 0; j < 3; j++)

        {
            sumrows=sumrows+a[i][j];
            sumcolumn=sumcolumn+a[j][i];
         }
        
    printf("\n sumrow=%d, sumcolumn=%d",sumrows,sumcolumn);
    }
    
    
}
