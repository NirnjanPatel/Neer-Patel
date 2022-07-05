#include<stdio.h>
int main()
{
 int r,l, n,p,s,s1;
 printf("enter the value\n");
 scanf("%d",&n);
 p=n/100;
//  132/100==1
s=n%100/10;
// 132/100==32/10==3
l=n%10;
// 132/10==2
r=l*100+s*10+p;
s1=l+s+p;
printf("reverse no is %d",r);
printf("sum of no is %d",s1);
return 0;
}