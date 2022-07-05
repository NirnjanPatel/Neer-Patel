#include <stdio.h>
int main()
{
    int a, c, b;
    printf("Enter two values : ");
    scanf("%d%d", &a, &b);
    c = (a > b) ? a : b;
    printf("Larger is = %d", c);
}