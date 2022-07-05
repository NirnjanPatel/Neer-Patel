#include<stdio.h>
int main()
{
    // float c,f;
    // printf("enter the value of celcius\n");
    // scanf("%f",&c);
    // f=c*9/5+32;
    // printf("the value in fahrenheit is %f",f);


  double c,f;
    printf("enter the value of fahrenheit\n");
    scanf("%lf",&f);
    c=(f-32)*5/9;
    printf("the value in fahrenheit is %lf",c);
}