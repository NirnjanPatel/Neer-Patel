#include<stdio.h>
int sum(int ,int);
int main()
{
 int g=sum(5,7);
    printf("%d",g);
}
int  sum( int a,int b)
{
    int s;
    s=a+b;
     printf("sum=:%d\n",a);
      printf("sum=:%d\n",b);
    printf("sum=: %d\n",s);
    return s;
}