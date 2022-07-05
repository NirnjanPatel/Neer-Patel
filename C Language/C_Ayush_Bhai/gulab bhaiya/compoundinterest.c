#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,ci,a;
    printf(" enter principal,rate,time");
    scanf("%f%f%f",&p,&r,&t);
    
    a=p*pow((1+r/100),t);
    printf("amount %5.2f\n",a);
    
    ci=a-p;
    printf("ci is %5.2f\n",ci);
    
    // printf("ci is %.2f\n",ci);
    

}