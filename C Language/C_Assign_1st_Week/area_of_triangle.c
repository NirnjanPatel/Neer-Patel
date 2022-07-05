// area of triangle
#include <stdio.h>
void main()
{
    float a, h, b;

    printf("Enter length and base : ");
    scanf("%f%f", &h, &b);

    a = 0.5 * (b * h);

    printf("Area of triangle = %0.2f", a);
}