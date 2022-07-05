#include <stdio.h>
int main()
{
    int i, j,rows,sp;
    printf("enter no of rows\n");
    scanf("%d", &rows);       //5
   
    
    for (i = rows; i>=1; i--)           // 1 2
    {                                                                  
        for (sp=1; sp<=rows-i;sp++)       //1 2 3 4 
        {
            printf(" ");
        } 
        for (j = 1; j <=i; j++)    //1    1<=0     i=2  j=1 j=2  j=3
       {
            if (i == rows || j == 1 || i==j) 
                printf("* ");
            else
           printf("  ");

            }
        printf("\n");
    }


}
