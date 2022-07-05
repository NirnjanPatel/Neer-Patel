#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
c=a % b;
    if (a / b && c == 0)
    {
        printf("a is devided by b\n");
    }
    else
        printf("a is not devided by b\n");
    return 0;
}
