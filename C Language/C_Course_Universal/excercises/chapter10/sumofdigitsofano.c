// Sum of digits of a no.
#include <stdio.h>
int main()
{
    int no, mod, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &no);
    while (no > 0)
    {
        mod = no % 10;
        sum = sum + mod;
        no = no / 10;
    }
    printf("Sum is : %d", sum);
    return 0;
}
