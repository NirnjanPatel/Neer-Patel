#include <stdio.h>
int main()
{
    int a, b, c, d, e, r, sum;
    printf("Enter value of a\n");
    scanf("%d", &a);
    b = a / 1000;            // 1
    c = a % 1000 / 100;      // 2
    d = a % 1000 % 100 / 10; // 3
    e = a % 1000 % 100 % 10; // 4
    r = e * 1000 + d * 100 + c * 10 + b;
    sum = b + e;
    printf("Reverse of %d is %d\n", a, r);
    printf("Sum = %d\n", sum);
    return 0;
}
