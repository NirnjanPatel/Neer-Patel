/*
 inverted half Pyramid Pattern

7 6 5 4 3 2 1
6 5 4 3 2 1
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

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
    for (i = rows; i > 0; i--) // define the outer loop
    {
        for (j = i; j > 0; j--) // define the inner loop
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    // getch();
}