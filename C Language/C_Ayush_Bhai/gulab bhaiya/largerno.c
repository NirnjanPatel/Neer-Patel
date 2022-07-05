#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 no\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
    {
        printf("a is larger among b and c %d\n",a);

    }
    // else if  (b>a&&b>c) 
    else if (b>c)
    printf("b is larger among a and c %d\n",b);
else printf("cis largest\n");
}