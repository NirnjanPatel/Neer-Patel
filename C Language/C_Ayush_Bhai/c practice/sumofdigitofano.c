#include<stdio.h>
int main()
{
    int n,sum=0,q,p;
    printf("enter a no\n");
    scanf("%d",&n);

while (n>0)
{
    p=n%10;
    sum=sum+p;
    n=n/10;


}
printf("sum of digit of a no is %d",sum);
}