#include <stdio.h>
int main()
{
    float bs, gs, pf, da = 500, ta, ns;
    printf("value of bs\n");
    scanf("%f", &bs);
    ta = bs * 10 / 100;
    pf = bs * 7.8 / 100;
    printf("value of ta%0.2f\n", ta);
    printf("value of pf%0.2f\n", pf);
    gs = bs + da + ta;
    printf("value of gs%0.2f\n", gs);
    ns = gs - pf;
    printf("value of ns%0.2f\n", ns);
}