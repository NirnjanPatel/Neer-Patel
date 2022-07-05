#include<stdio.h>
int main()
{
    int a = 34;
    float b = 56.65;
    printf("The valur of a is %d and the value of b is %f\n",a,b);
    printf("The value of b is %-12.4f This\n",b);
    printf("The value of b is %12.4f This\n",b);
    return 0;
}