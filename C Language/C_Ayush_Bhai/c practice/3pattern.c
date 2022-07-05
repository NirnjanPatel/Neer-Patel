#include<stdio.h>
int main()
{
    int i,j,rows;
printf("enter the no of rows \n");
scanf("%d",&rows);
    for ( i = 1; i <=rows; i++)
    {
        for ( j = rows; j >=i; j--)
        {
           printf("*");
        }
        printf("\n");
    }





    //  for ( i=rows; i>=1; i--)
    // {
    //     for ( j = 1; j <=i; j++)
    //     {
    //        printf("*");
    //     }
    //     printf("\n");
    // }
}