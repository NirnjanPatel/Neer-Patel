#include<stdio.h>
int main()
{
    int i,j,rows;
    // for ( i = 1; i <=4; i++)
    // {
    //     for ( j = 1; j <=i ; j++)
    //     {
    //       printf("%d",j);
        
    //     }
    //  printf("\n");   
    // }
printf("enter the value of rows\n");
scanf("%d",&rows);


    for ( i = 1; i <=rows; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
          printf("%d",j);
        
        }
     printf("\n");   
    }
    
}