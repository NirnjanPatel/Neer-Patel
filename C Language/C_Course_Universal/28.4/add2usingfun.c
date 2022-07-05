#include <stdio.h>
void add()
{
    int a, b, c;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum = %d\n", c);
}
void main()
{
    add();
    add();
}