#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three values : ");
    scanf("%d%d%d", &a, &b, &c);
    printf("A is largest = %d\n", (a > b && a > c));
    printf("B is largest = %d\n",(b > c && b > a));
    printf("C is largest = %d\n", (c > a && c > b));
    printf("A is +ve or 0 = %d\n", (a > 0 || a == 0));
}