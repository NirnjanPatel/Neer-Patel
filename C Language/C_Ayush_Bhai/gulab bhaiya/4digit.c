#include<stdio.h>
int main()
{
    int n,f,m,w,q,o, sum;
    printf(" enter 4 digit no \n");
    scanf("%d",&n);
    f=n/1000;
    m=n%1000/100;
    o=n%1000%100/10;

    q=n%1000%100%10;
    w=q*1000+o*100+m*10+f;
    sum=q+f;
    printf("reverse value of no \n%d",sum);

}