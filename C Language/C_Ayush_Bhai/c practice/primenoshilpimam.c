#include<stdio.h>
void main()
{
    int n ,i,num=0;
    printf("\n enter a no\n");
    scanf("%d",&n);
    for ( i=2; i<n/2; i++)
    {
       if (n%i==0)
       {
            num=1;
            break;
       }
       
    }
    if (num==1)
    {
        printf("\n no is not a prime no");

    }
    else
    printf("\n no is prime no");
}