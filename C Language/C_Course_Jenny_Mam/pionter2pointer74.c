#include <stdio.h>
int main()
{
    int a = 34;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    *p = 12;
    **q = 23;
    ***r = 34;
    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("a = %d\n", *(*q));
    printf("a = %d\n", *(*(*r)));
    printf("Address of q = %x %x\n", r, &q);
    printf("Address of p = %x %x\n", &p, q);
}