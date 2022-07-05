#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 1, j = 2; j <= 10; i++, j++) // always prints as last condition
    {
        printf("%d\t%d\n", i, j);
    }
}