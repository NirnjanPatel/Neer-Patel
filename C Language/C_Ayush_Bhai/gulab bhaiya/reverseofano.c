#include<stdio.h>
int main()
{
    int  n,l,r=0, sum=0;
    printf("enter a no \n");
     scanf("%d",&n);
     while (n>0)
     {
    
     l=n%10;
     r=r*10+l;
     n=n/10;
     sum=sum+l;
     }
     printf("reverse of a no is %d",r);
     printf("sum of reverse of a no is %d", sum);
return 0;
}