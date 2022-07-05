#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
void main()
{

union abc demo;
union abc *ptr=&demo;
demo.a=5;
demo.b='h';
// demo.c=98.62;

printf("a value is %d\n",ptr->a);
printf("b value is %c\n",ptr->b);
// printf("c value is %f\n",ptr->c);
}