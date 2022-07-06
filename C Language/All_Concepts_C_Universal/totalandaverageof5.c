// Programme to print total and average of five subjects
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float p, c, m, h, e, t, a;
    printf("Enter marks of Physics : ");
    scanf("%f", &p);
    printf("Enter marks of Chemistry : ");
    scanf("%f", &c);
    printf("Enter marks of Maths : ");
    scanf("%f", &m);
    printf("Enter marks of Hindi : ");
    scanf("%f", &h);
    printf("Enter marks of English : ");
    scanf("%f", &e);
    t = p + c + m + h + e;
    a = t / 5;
    printf("Physics = %0.0f\n", p);
    printf("Chemistry = %0.0f\n", c);
    printf("maths = %0.0f\n", m);
    printf("Hindi = %0.0f\n", h);
    printf("English = %0.0f\n", e);
    printf("Total = %0.0f\n", t);
    printf("Average = %0.2f\n", a);
    if (a >= 65)
    {
        printf("You are passed in First division\n");
    }
    else if (a >= 55 || a <= 45)
    {
        printf("You are passed in Second division\n");
    }
    else if (a >= 33 || a <= 44)
    {
        printf("You are passed in Third division\n");
    }
    else
        printf("You are Failed\n");
    return 0;
}
