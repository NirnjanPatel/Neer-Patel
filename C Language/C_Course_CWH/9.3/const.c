// const 
#include<stdio.h>
#define PI 23.32 //   PI = 435; wronng becoz cant change value
int main()
{
    int a = 12;
    const float b =22;//   b =22; wronng becoz cant change value
printf("Enter Value of a = %d\n",a);
printf("Enter Value of b = %0.1f\n",b);
printf("%f\n",PI);
printf("Enter Value of b =\t %0.1f\n",b);
    return 0;
}
