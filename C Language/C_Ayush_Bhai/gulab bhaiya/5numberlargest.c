#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter 5no\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a>b&&a>c&&a>d&&a>e)
    {
        printf("a is larger among b,c,d,e%d",a);
    }
        else  if(b>c&&b>d&&b>e)
        printf("b is larger among c,d,e%d",b );
        else if (c>d&&c>e)
        {
            printf("c is larger among d  and e%d",c);
            
        }
        else if (d>e)
        {
         printf("print d %d",d);

        }
        else
        printf("print the value of e%d",e);
        
        
        
    
}