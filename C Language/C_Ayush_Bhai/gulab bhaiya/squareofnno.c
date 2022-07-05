#include<stdio.h>
int main()
{
    int a,sum=0,n;
    printf("enter a no you want a square of\n");
    scanf("%d",&n);
    

    // printf("sum of square of a n natural no is\n");
    sum=(n*(n+1)*((2*n)+1))/6;
    printf("sum of square of  n natural no is :%d ",sum);
}