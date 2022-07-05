// Sum of 1/1+1/2+1/3+1/4+.........
#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a Num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d + ", i);
        sum += i;
    }
    printf("\b = %d", sum);
    return 0;
}