#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("enter the value of array elements\n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("array of index %d is: %d\n",i,a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("array of index %d is :%d\n",i,b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
    c[i]=a[i]+b[i];
    printf("sum of array of each index%d is :%d\n",i,c[i]);
        
    }
    
    
     
}