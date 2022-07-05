#include<stdio.h>
void fun(int *, int );
void main()
{ 
    int i,n;
    printf("\n enter size of array");
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
       printf("\n enter an element = ");
       scanf("%d",&a[i]);
    }
     fun(a,n);
    }
 
void fun(int *p, int n)
{
    int i, max=0;

    for ( i = 0; i < n; i++)
    {
      if(max < *p)
      max=*p;
      p++;
    }
    printf("max=%d",max);
}