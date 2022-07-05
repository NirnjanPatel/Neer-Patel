#include<stdio.h>
int factorialiterative(int n)
{
    int val=1;
    for (int i = n; i >1; i--)
    {
        val*=i;
    }
    return val;
}
int main()
{
    // fac (0)=1
    // fac(n)=n*fac(n-1)
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int factorial=factorialiterative(n);
    printf("the value of factorial is %d\n" , factorial);
     return 0;
}