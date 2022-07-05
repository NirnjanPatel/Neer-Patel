#include <stdio.h>

void main()
{
    int i, fact = 1, num;
    printf("Enter a num : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}