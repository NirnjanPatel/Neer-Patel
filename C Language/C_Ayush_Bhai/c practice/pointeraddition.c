#include<stdio.h>
int main()
{
    int a[5]={1,5,6,-8,7};
    int *p=&a[0];
    printf("%d\n",*p);
    printf("address of element is :%u\n",p);
    p=p+2;
    *p=30;
    printf("%d\n",*p);
    printf("address of element is :%u\n",p);


}