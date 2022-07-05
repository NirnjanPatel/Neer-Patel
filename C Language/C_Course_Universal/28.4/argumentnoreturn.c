#include <stdio.h>
void add(int x, int y)
{
    int c;
    c = x + y;
    printf("Sum = %d", c);
}
void main()
{
    int a, b;
    printf("Enter 2 values : ");
    scanf("%d%d", &a, &b);
    add(a, b);
}