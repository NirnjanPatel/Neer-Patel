#include <stdio.h>
int main()
{
    float d, q, r, b, net;
    printf("enter the value of q,r,d\n");
    scanf("%f%f", &q, &r);
    b = q * r;
    if (b >= 15000)
    {
        d = b * 15 / 100;
    }
    else if (b >= 10000)
    {
        d = b * 10 / 100;
    }
    else if (b >= 5000)
    {
        d = b * 5 / 100;
    }
    else
        d = b * 2 / 100;
    net = b * d;

    printf("the value of quantity is=%f\n", q);
    printf("the value of rate is=%f\n", r);
    printf("the value of bill is=%f\n", b);
    printf("the value of discount is=%f\n", d);
}
