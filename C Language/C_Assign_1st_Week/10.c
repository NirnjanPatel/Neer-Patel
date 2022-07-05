//salary 
#include<stdio.h>
void main()
{
    float basic, da, ta, pf, gs, ns;
    printf("Enter Basic Salary : ");
    scanf("%f", &basic);
    ta = (basic * 10) / 100;
    da = 500;
    pf = (basic * 7.8) / 100;
    gs = basic + da + ta;
    printf("gross salary is : %.2f\n", gs);
    ns = gs - pf;
    printf("Net salary is : %.2f\n", ns);
}