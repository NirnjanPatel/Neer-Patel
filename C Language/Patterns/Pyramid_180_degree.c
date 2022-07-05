/*
 full Pyramid of Star in 180 degree

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>
void main()
{
    int i, j, rows, k;
    printf("Enter Row : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows - 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (k = i; k <= rows; k++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
