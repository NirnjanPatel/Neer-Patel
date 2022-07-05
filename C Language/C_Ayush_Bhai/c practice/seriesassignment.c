#include <stdio.h>
int main()
{
    int i,n;
    printf("enter a no\n");
    scanf("%d", &n);
    float sum = 0;
    for (i = 1; i <=n; i++)
    {
        float r=(float)1/i;
        sum = sum+r;
    }
    printf("series sum is %0.2f", sum);
}