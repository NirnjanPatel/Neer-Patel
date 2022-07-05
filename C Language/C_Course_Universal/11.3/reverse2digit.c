// Reverse Two Digits
#include <stdio.h>
int main()
{
    int no, div, mod, rev, sum;
    printf("Enter Two Digit no.");
    scanf("%d", &no);
    div = no / 10;
    mod = no % 10;
    rev = mod * 10 + div;
    sum = div + mod;
    printf("Reverse = %d\n", rev);
    printf("Sum = %d\n", sum);
    return 0;
}
