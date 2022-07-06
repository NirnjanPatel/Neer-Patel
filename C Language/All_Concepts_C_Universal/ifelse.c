// if else statement with using special operators
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    
    printf("Enter Two Values\n");
    scanf("%d%d",&a,&b);
    c=!(a<=b)?a:b;
    printf("c=%d\n",c);
    if (a>b) // Condition1
    {
    printf("a is > than b = %d\n",c);    
    }
    else 
    printf("a is < than b = %d\n",c);    
    return 0;
    }

