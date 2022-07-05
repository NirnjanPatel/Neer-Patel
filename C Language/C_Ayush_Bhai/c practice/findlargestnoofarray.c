#include<stdio.h>
int main()
{
    int i ,a[5],max;
        printf("enter elements of array =");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
        if (a[i]>max)
        {
          max=a[i];
        }
    }
        printf("max value is =%d",max);
    
}