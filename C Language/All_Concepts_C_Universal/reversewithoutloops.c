// Programme to reverse three digit number without using if and loops
#include <stdio.h>
int main()
{
    int a, b, c, d, r, sum;
    printf("Enter a number\n");
    scanf("%d", &a);
    b = a / 100;
    printf("a = %d\n", b);
    c = a % 100 / 10;
    printf("b = %d\n", c);
    d = a % 100 % 10;
    printf("c = %d\n", d);
    r = d * 100 + c * 10 + b;
    printf("Reverse = %d\n", r);
    sum = b + d;
    printf("Sum is : %d\n", sum);
    return 0;
}
