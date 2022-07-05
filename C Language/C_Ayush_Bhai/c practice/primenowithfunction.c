#include<stdio.h>
int prime(int r)
{
int flag=0,i;
for ( i =2 ;i<r; i++)
{
  if (r%2==0)
  {
     flag=1;
     break;
  }
}
  return flag;
}
void main()
{
    int i ,n,flag;
    printf("enter a no\n");
    scanf("%d",&n);

flag=prime(n);
 if (flag==1)
 {
  printf("no is not a prime no\n");

 }
 else
 {
     printf("no is prime no\n");
 }
}