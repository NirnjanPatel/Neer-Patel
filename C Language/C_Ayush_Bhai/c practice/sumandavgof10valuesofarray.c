#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, avg;
    printf("enter size of array\n");
    scanf("%d", &n);

    int a[n];

    printf("enter value of array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("sum of array element is =%0.2f", sum);

    avg = sum / n;
    printf("avg of array element is %0.2f", avg);
}