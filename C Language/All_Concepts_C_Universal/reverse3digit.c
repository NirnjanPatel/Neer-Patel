// Reverse of three numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no, div, mod, mod2, rev, sum;
    printf("Enter three digit number:");
    scanf("%d", &no);
    div = no / 100;
    mod = no % 100 / 10;
    mod2 = no % 10;
    rev = mod2 * 100 + mod * 10 + div;
    sum = div + mod + mod2;
    printf("Reverse = %d\n", rev);
    printf("Sum = %d\n", sum);
    return 0;
}
