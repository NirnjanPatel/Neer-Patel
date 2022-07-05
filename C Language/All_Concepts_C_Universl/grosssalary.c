// Programme to print Gross Salary
#include <stdio.h>
int main()
{
    float gs, ns, ta, pf, da = 500, bs;
    printf("Enter Basic salary\n");
    scanf("%f", &bs);
    ta = bs / 10;
    printf("TA = %0.2f\n", ta);
    pf = bs / 7.8;
    printf("PF = %0.2f\n", pf);
    gs = ns + da + ta;
    ns = gs - pf;
    printf("Gross salary = %0.2f\n", gs);
    printf("Net salary = %0.2f\n", ns);
    return 0;
}
