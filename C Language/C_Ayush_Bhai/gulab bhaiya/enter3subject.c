#include<stdio.h>
int main()
{
 int a,b,c, avg;
 printf("enter 3 subject\n ");
 scanf("%d%d%d",&a,&b,&c);
avg=a+b+c/3;

 if (a>75&&b>75&&c>75&&avg>80)
 {
    printf("student is pass\n");
 }
 else
 printf("student is fail \n");
 
}

