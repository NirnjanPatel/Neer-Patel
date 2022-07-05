#include<stdio.h>
int fact (int n)
{
    int f;
    if (n==1)
    {
        return 1;

    }
    else
    f=n*fact(n-1);  //5*fact(4)  4*fact(3)  3*fact(2)  2*fact(1)    
    return f;
    
}
void  main()
{
int n;
printf("enter value of n");
scanf("%d",&n);
int q=fact(n);
printf("factorial of n is %d",q);

}