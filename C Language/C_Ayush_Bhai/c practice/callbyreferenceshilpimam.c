#include<stdio.h>
void swap(int*p ,int*q)
{
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
printf("value of a and b are %d,%d",*p,*q);
}

void main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("value of a and b is %d,%d",a,b);
}