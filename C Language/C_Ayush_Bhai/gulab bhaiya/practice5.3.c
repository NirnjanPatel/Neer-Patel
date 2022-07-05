#include <stdio.h>
int main()
{
    int m, c, p, b, s, t, per;
    printf("enter five subject\n");
    printf("first subject marks\n");
    scanf("%d", &m);
    printf("Second subject marks\n");
    scanf("%d", &c);
    printf("third subject marks\n");
    scanf("%d", &p);
    printf("fourth subject marks\n");
    scanf("%d", &b);
    printf("fifth subject marks\n");
    scanf("%d", &s);
    t = m + c + p + b + s;
    per = t / 500;
    printf("percentage value is\n");
    if (per >= 30)

    {

        printf("student is pass\n");
    }
    else
        printf("student is failt\n");
}