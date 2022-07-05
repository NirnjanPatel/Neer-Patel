// HCF of two nos
#include <stdio.h>
int main()
{
    int no1, no2, i, gcd;
    printf("Enter two nos : ");
    scanf("%d%d", &no1, &no2);
    for (i = 1; i <= no1 && i <= no2; i++)
    {
        if (no1 % i == 0 && no2 % i == 0)
            gcd = i;
    }
    printf("HCF of %d and %d is %d", no1, no2, gcd);
    return 0;
}