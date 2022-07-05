#include<stdio.h>
int main()
{
    int a[]={3,2,6,89,56};
    int *p;
    p=&a[2];
    printf("%d %d\n",*--p,*--p);
    printf("%d %d\n",*++p,*++p);
    printf("%d\n",*--p);
    printf("%d\n",*p--);
    printf("%d",*p);

}