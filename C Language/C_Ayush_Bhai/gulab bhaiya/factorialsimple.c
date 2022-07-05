#include <stdio.h>
int main()
{
    int n, i, b = 1;
    printf("enter the no which you want a factorial of\n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) // 5       5>=1   4   4>=1  3>=1  2>=1
    {
        b = i * b; //=5    =20  =60    =120
    }
    printf("factorial of a no is %d", b);
}
