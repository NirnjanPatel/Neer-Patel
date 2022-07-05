#include<stdio.h>
int series (int n)
{
    int i,s=0;
    for (i = 1; i <=n; i++)
    {
     printf("%d^2+",i);
     s=s+i*i;
     return s;
    }
    printf("sum=%d",s);

}
    void main()
    {
int n,e;
printf("enter no of terms\n");
scanf("%d",&n);
e=series(n);
printf("sum=%d",e);

    }

