#include <stdio.h>
int main()
{
    int a[] = {34, 5, 3, -3, -6};
    int *p = &a[0];
    int d;
    int *q = &a[2];
    d = p - q;
    printf("%d", d);
}