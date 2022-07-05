// 4 digit no. - Sum of first and last digit
#include <stdio.h>
void main()
{
    int no,f,l,sum;

    printf("Enter four digit number : ");
    scanf("%d", &no);

    l = no % 10;
    printf("Last no. : %d\n", l);
    f = no / 1000;
    printf("First no. : %d\n", f);
    sum = l + f;
    printf("Sum of first and last = %d\n", sum);
}