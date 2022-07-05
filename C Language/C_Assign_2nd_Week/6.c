#include <stdio.h>
int main()
{

    int i;
    float n, sum;
    printf("enetr no\n");
    scanf("%f", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }

    printf("%f", sum);
}
