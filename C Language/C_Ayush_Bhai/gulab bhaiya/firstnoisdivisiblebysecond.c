#include<stdio.h>
int main ()
{
    int a , b ;
    printf("enter 2 no \n");
    scanf("%d%d",&a,&b);

    if (a%b==0)
    {
        printf("no is divisible by second\n");

    }
    else
    printf("no is not divisible\n");
}