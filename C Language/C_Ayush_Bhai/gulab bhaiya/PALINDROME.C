#include <stdio.h>
int main()
{
    int c, sum = 0, r, n;
    printf("enter the  no\n");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;      //121%10==1    12%10==2    1%10
        sum = sum*10 + r;  //1           12          121
        n = n / 10;   //12                 1
    }
    if (sum == c)
    {
        printf("no is parindrome\n");
    }
    else
        printf("no is not a palindrome\n");
}