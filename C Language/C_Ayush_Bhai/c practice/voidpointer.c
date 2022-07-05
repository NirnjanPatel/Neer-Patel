#include<stdio.h>
void main()
{
    void *vp;
    int a=5;
    float f=1.56;
    char c='h';
    vp=&a;
    printf("a=%d\n",*(int*)vp);

vp=&c;
printf("%c\n",*(char*)vp);

vp=&f;
printf("%f",*(float*)vp);
}