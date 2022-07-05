#include<stdio.h>
void fun(int );


void main()
{
    int a =10;
    fun(a);
    printf("\n a in main function=%d",a);
}
void fun(int x)
{

x+=5;
printf("\n max array elements =%d",x);

}