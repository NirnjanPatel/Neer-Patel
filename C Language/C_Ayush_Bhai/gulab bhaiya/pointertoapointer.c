#include<stdio.h>
int main()
{
    int a=10;
    int*p=&a;
    int**q=&p;
    int***r=&q;
    
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("%d\n",*(*q));
      printf("%d\n",*(*(*r)));
      printf("address of q=%x  %x",r,&q);
}