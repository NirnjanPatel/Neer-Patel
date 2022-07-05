#include <stdio.h>
int main()
{
    int i, j,rows,k;
    printf("enter no of rows\n");
    scanf("%d", &rows);      
    for (i = rows; i >=1; i--)           
    {                                                                  
        for (k=1; k<=rows-i;k++)       
        {
            printf(" ");
        } 
        for (j = 1; j <=i; j++)    
       {
            if (i == rows || j == 1 || i==j) 
                printf("* ");
            else
           printf("  ");

            }
        printf("\n");
    }
}

// * * * * *
//  *-----*
//   *---*
//    *-*
//     *