#include<stdio.h>
int main()
{
    int a,b,c,choice;
    do
    {
       printf("enter two no\n");
       scanf("%d%d",&a,&b);
       c=a+b;
       printf("value of c=%d",c);
       printf("do you want to continue:.....press1\n");
       scanf("%d",&choice);
    }while (choice==1);
    
}