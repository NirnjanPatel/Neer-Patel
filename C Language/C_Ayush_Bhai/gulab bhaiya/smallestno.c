#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter three no\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b&&a<c)
    {
        printf("\n smallest no is %d",a);
    }
        else if (b<c)
        {
           printf("smaller:%d",b);
           
        }
        else
        printf("smaller no is %d:",c);
        
    }
    
