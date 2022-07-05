#include <stdio.h>
int main()
{
    float a = 10, b = 11;
    float *p, *q;
    p = &a;
    // q = p;
    q = &b;
    *q = *p;
    printf("a = %.2f\t%.2f\t%.2f\n", a, *p, *q);
}