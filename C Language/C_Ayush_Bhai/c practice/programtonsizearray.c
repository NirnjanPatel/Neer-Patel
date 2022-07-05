#include<stdio.h>
int main()
{
    int i,n;
    // printf("enter array size\n");
        printf ("enter array size\n");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");+
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
      printf("value of array is %d\n",a[i]);
    }
    
}