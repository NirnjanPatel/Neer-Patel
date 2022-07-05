#include<stdio.h>
int main()
{
    int a[]={10,11,-5,-8,6,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);
    printf("%d %d %d\n",(*p)++,*p++,*++p);
    printf("%d\n",*p);
    q=p+3;
    printf("%d\n",*q);
 printf("%d\n",*q-3);
//   *q=is 4 (4-3)==1 since * has higher precedence than +
  printf("%d\n",*--p+5);
  printf("%d\n",*q+*p);
  

    
}