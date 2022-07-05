#include<stdio.h>
int sumofnaturalno(int n);
int main()
{
    int num;
    printf("enter a no\n");
    scanf("%d",&num);
    printf("sum=%d",sumofnaturalno(num));
}
int sumofnaturalno(int n)
{
    if(n!=0)
    return n+sumofnaturalno(n-1);
    else 
    return n;
}