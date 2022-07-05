#include<stdio.h>
int main()
{
    int i,s=0;
    int a[10]={2,3,5,7,45,4,2,78,95,10};
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    s=s+a[i];
    }
    printf("sum is =%d",s);
    
}