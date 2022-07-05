/*
 print the right half Pyramid
    *
   **
  ***
 ****
*****

*/
#include <stdio.h>
void main()
{
    int i, j, rows, k;
    printf("Enter Row : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i; j--)
        {
            printf("*");
        }
        for (k = 1; k <= i; k++)
        {

            printf(" ");
        }
        printf("\n");
    }
}
