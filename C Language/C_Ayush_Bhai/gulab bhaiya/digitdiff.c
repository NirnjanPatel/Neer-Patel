#include<stdio.h>
int main()
{
    int a ,r,f, c=0;
    printf("enter the no\n");
    scanf("%d",&a);
        f=a%10;
      r=a/100;
      c=f-r;
    printf("reverse no is %d",c);
}