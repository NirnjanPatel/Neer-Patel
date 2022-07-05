#include<stdio.h>
int fact(int n)
{
    int f;
    if (n==1)
    {
    return 1;    
    }
    else
    f=n*fact(n-1);
    return f;
    
}
int main()
{
    int n;
    printf("enter the value\n");
    scanf("%d",&n);
    int q=fact(n);
    printf("factorial value is %d",q);
}