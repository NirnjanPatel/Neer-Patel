#include<stdio.h>
int main()
{
    float a,b,temp;

    printf("enter two value \n");
    scanf("%f %f",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping %0.2f %0.2f  ",a,b);
    




}