#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 1, j = 2, k = 3; i <= 5, j <= 10, k <= 15; i++, j++, k++) // always prints as last condition
    {
        printf("%d\t%d\t%d\n", i, j, k);
    }
}