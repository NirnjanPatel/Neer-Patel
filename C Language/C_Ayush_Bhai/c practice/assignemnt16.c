#include<stdio.h>
void fun(int *p ){
int t=*p**p;

printf("multiply value is%d",t);


}


int main()
{
    int a,b;
    scanf("%d",&a);
fun(&a);
//