#include<stdio.h>
int main(){
    int i,j,rows;
    // for ( i = 1; i <=5; i++)
    // {
    //     for ( j = 1; j <=i; j++)
    //     {
    //         printf("%d",i);

    //     }
    //     printf("\n");
    // }
    

    printf("enter no of rows\n");
    scanf("%d",&rows);
    for ( i = 1; i <=rows; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",i);

        }
        printf("\n");
    }
    
}