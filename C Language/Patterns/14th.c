/*
Number Pyramid Patterns


1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

 */

#include <stdio.h>
// #include <conio.h>
void main()
{
    // declare the local variables
    int i, j, rows;
    printf(" Enter a number to define the rows: \n ");
    scanf("%d", &rows);
    printf("\n");
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    // getch();
}