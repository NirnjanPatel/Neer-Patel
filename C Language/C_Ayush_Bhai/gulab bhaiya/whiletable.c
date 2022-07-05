#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a no \n");
    scanf("%d",&n);
    while (i<11)
    {
       printf(" table of %d is = %dx%d=%d\n",n,n,i,n*i);
       i++;
    }
    
}