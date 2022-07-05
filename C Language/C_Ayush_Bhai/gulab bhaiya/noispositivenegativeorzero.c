#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of no\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("\n A is positive\n");
    }
    else if (a < 0)
    {
        printf("\n A is negative\n");
    }
    else
    {
        printf("A is zero\n");
    }
}