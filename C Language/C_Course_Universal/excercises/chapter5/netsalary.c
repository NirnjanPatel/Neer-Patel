#include <stdio.h>
int main()
{
    int gs, bs, pf, da, ns, ta;
    printf("Enter Basic Salary : ");
    scanf("%d", &bs);
    ta = bs * 10 / 100;
    pf = bs * 7.8 / 100;
    da = 500;
    gs = bs + ta + da;
    ns = gs - pf;
    printf("bs = %d\n", bs);
    printf("TA = %d\n", ta);
    printf("DA = %d\n", da);
    printf("PF = %d\n", pf);
    printf("GS = %d\n", gs);
    printf("ns = %d\n", ns);
}