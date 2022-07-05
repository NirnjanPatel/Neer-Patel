#include <stdio.h>
void main()
{
    int n, a = 0, b = 1, i, c;

    printf("Enter any number : ");
    scanf("%d", &n);
    printf("%d ", a);
    printf("%d ", b);

    for (i = 0; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}