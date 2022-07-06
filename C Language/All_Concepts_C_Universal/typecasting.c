#include <stdio.h>
int main()
// typecasting syntax
// (type) value;
{
    int a = 3;
    float b = 45;

    printf("The value of a is %d\n", (float)a);
    printf("The value of b is %.2f\n", b);
    printf("The value of b is %d\n", (int) b);
    return 0;
}
