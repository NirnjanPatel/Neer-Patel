#include<stdio.h>
void fun(int *);
void main()
{
int s=25;
fun(&s);
 printf("%d",s);


}
void fun(int *p)
{
    *p+=64;
    printf("%d\n",*p);
}