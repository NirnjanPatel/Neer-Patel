#include <stdio.h>
void main()
{
    int num, sum = 0, i;
    printf("Enter a num : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
}