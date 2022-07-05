#include<stdio.h>
void main()
{
    double cel, fer;

    printf("Enter ferenite : ");
    scanf("%lf", &fer);
    cel = (fer - 32) * 5 / 9;
    printf("celcius is : %.2lf", cel);
}