#include<stdio.h>
int main()
{
    int a=-11;
    int *p=&a;
    *p=-9;
    printf("%d",a);
}