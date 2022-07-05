#include<stdio.h>
void main()
{
    int i, n ,sum=0;
    printf("enter a no\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    if (n%i==0)
    {
        printf("the factor of n are  %d\n",i);
        sum+=i;
    }
    
    }
    if (sum==n)
    {
        printf("the no is a perfect no\n",i);
    }
    else
    printf("the no is not perfect no\n");
    
    printf("%d",sum);
}