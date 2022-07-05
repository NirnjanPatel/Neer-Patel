#include "stdio.h"
void main()
{
    int x[3 + 1], i;
    for (i = 0; i <= 4; i++)
        scanf("%d", &x[i]);
    for (i = 4; i >= 0; i--)
        printf("Arrays of index %d is %d\n", i, x[i]);
}