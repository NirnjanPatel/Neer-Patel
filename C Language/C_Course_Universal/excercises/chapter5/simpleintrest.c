// PROGRAMME TO PRINT SIMPLE INTREST
#include<stdio.h>
int main()
{
    float a,r,t,i;

    printf("Enter amount\n");
    scanf("%f",&a);
    printf("Enter Rate\n");
    scanf("%f",&r);
    printf("Enter TIme\n");
    scanf("%f",&t);
    i = a * r * t/100;
    printf("Amount = %0.2f\n",a);
    printf("Rate = %0.2f\n",r);
    printf("Time = %0.2f\n",t);
    printf("Simple Intrest = %0.2f\n",i);
    return 0;
}
