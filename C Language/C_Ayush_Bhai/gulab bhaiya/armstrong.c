#include <stdio.h>
int main()
{
    int r, sum = 0, temp, n, c;
    printf("enter the value of n\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0){
        r = n % 10;
    c = r * r * r;
    sum = sum + c;
    n = n / 10;
    }
    if (temp == sum)
    {
        printf("the value is armstrong\n");
    }
    else
        printf("the value is not armstrong\n");

}