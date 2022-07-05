#include<stdio.h>
int main()
{
    int n,l,r,f;
    printf("enter a no\n");
    scanf("%d",&n);
    if(n>9&&n<100){
    f=n/10;
    // 23/10 ==2
    l=n%10;
    // 23/10==3
    r=l*10+f;
        printf("reverse value of a no is %d",r);
    }
    else
    printf("not a valid number");

}