#include<stdio.h>
int fact(int );
void main()
{
    int n ,f;
    printf("enter a no \n");
    scanf("%d",&n);
   int q= fact(n);
printf("factorial of a no is %d :",q);
}


int fact(int r)
{
int i,f=1;
for ( i = 1; i <=r; i++)
{
  f=f*i;
}
return f;
}






