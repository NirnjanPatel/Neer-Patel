// Area of circle
#include <stdio.h>
void main()
{
    double r, area;
    printf("Enter Radious : ");
    scanf("%lf", &r);
    area = 3.14 * r * r;
    printf("Area of circle = %.2lf", area);
}