#include<stdio.h>
int main()
{
    int a[20][30],i,j,sum=0;
    printf("enter the value of array\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
       
    }
        printf("\n\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
        printf("%d\t",a[i][j]);
            
        }
         printf("\n");
    }
     printf("\n\n");
     printf("transpose of matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
           printf("%d\t",a[j][i]);
           sum=sum+a[j][i];
        }
        printf("\n");
        
    }
    
    printf("sum is =%d",sum);

}