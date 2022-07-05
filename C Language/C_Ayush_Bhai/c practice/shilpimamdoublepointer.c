#include<stdio.h>
void main()
{
    int a=2;
    int*p=&a;
     int **q;
     q=&p;
    //  printf("address AT a %p\n",a);
     printf("address AT a %p\n",&a);
     printf("address AT a %p\n",&p);
     printf("address AT p %p\n",p);
     printf("address AT q %lu\n",&q);
     printf("value at q %p\n",*q);
     printf("address AT a %p\n",**q);
     
}