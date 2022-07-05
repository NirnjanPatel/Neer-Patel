#include<stdio.h>
void main()
{ 
    int a,b;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);


    int*p ,*q,c;
    p=&a;
    q=&b;
 printf("before swapping a=%d",p);
 printf("before swapping b=%d",q);

    c=*p;
    *p=*q;
    *q=c;
    printf("after swapping a=%d\n",*p);
    printf("after swapping a=%d",*q);
    // printf("after swapping a=",*(p+2));




}