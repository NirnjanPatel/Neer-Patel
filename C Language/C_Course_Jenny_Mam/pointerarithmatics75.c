#include <stdio.h>
int main()
{
    int a[5] = {1, 4, 6, -23, 0};
    int b[3] = {2, 4, -77};
    int *p = &a[0];
    int *q = &b[2];
    int d;
    printf("Value is : %d\n", *p);
    printf("Address of element is %u\n", p);
    // formula p + n = p + n *p = p + 1;
    *p = 344;

    printf("Value is : %d\n", *p);
    printf("Address of element is %u\n", p);
    q = q - 2;
    printf("%d\n", *q);
}
