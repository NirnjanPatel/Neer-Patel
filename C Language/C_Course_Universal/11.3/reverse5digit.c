// Programme to print larger number among three
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter five numbers :");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a > b && a > c && a > d && a > e)
    {
        printf("a is larger\n");
    }
    else if (b>a && b > c && b > d && b > e)
    {
        printf("b is larger\n");
    }
    else if (c > d && c > e)
    {
        printf("c is larger\n");
    }
    else if (d > e)
    {
        printf("d is larger\n");
    }

    else
        printf("e is larger\n");
    return 0;
}