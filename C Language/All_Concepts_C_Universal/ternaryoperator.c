// Ternary Operator (? :)
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter Two Values\n");
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;
    printf("c=%d\n",c);
    a=(b<c)?b:c;
    printf("a=%d\n",a);
    return 0;
}
