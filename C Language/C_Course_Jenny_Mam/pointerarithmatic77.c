#include <stdio.h>
int main()
{
    int a[] = {3, 2, 67, 0, 56};
    int *p;
    p = &a[1];
    printf("%d\n", *p++);
    printf("%d\n", *p);
    return 0;
}