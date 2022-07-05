#include<stdio.h>
void main()
{
    int a=0,b=1,n,c,i;
    printf("enter the no\n");
    scanf("%d",&n);

    for (i = 0; i <n; i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    
}