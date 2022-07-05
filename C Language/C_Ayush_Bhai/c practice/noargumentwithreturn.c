#include<stdio.h>
int sum();
int  main()
{
    int s;
    s=sum();
    printf(" sum=:%d",s);


}
int sum()
{
    int a,b,sum;
    printf("enter two no\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
     printf("value of sum is: %d",sum);
    return sum;
}
