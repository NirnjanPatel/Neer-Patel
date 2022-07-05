#include <stdio.h>
void main()
{
    int num, i;
    float sum = 0;

    printf("Enter a num : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {

        sum = sum + 1.0 / i;
    }
    printf("%0.2f", sum);
}