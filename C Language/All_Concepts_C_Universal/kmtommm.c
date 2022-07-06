#include <stdio.h>
int main()
{
    double km = 5, mm, cm;
    cm = km * 1000;
    mm = cm * 1000;
    printf("km = %0.2lf\n", km);
    printf("cm = %0.2lf\n", cm);
    printf("mm = %0.2lf\n", mm);
}