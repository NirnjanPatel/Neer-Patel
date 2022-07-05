#include <stdio.h>
int main()
{
    int a = 10, b = 9, c;
    int *p, *q;
    p = &b, &a;
    /*in this the assignment operator has much priority ,then comma operator so that why
    &b is stored in p not &a ;*/
    p = (&b, &a);
    /*in  comma first address of &b is assigned then it is discarded then finally &a is assigned and it is returned the value of a*/
    // q=&b;
    c = *p;
    printf("value of a =%d\n", a);
    printf("value of a =%d\n", *p);
    printf("value of &a =%x\n", p);
    printf("value of &p =%x\n", &p);
    printf("value of b =%d\n", *q);
    printf("value of c =%d", c);
}