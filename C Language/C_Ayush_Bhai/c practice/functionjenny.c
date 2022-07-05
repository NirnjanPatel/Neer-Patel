#include<stdio.h>
float sum(); //function declaration
void main()
{
    sum(); //function calling
}
float sum()    //function definition
{
    float a,b,sum=0;
    printf("enter two no\n");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}