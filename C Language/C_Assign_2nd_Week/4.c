#include <stdio.h>
void main()
{
    int num, sum = 0, i, l;
    printf("Enter a num : ");
    scanf("%d", &num);
    // while (num > 0)
    // {
    //     l = num % 10;
    //     sum = sum + l;
    //     num = num / 10;
    // }
    // printf("Sum = %d", sum);

    for (i = num; i > 0; i++)
    {
        l = num % 10;
        sum = sum + l;
        num = num / 10;
    }
    printf("Sum = %d", sum);
}