#include<stdio.h>
int main()
{
    int  n,i,key,freq=0;
    printf("enter array size\n");
    scanf("%d",&n);
    int a[n];

    printf("enter array elements \n");
    for ( i = 0; i <n ; i++)
    {
      scanf("%d",&a[i]);
    }
    
    printf(" array elements \n");
    for ( i = 0; i <n ; i++)
    {
      printf("%d\t",a[i]);
    }
    
    printf(" \nenter element you want to search\n");
      scanf("%d",&key);

    for ( i = 0; i <n; i++)
    {
        if (a[i]==key)
        {
            freq++;
        }
    }
        printf("no of times element accur in array %d",freq);
    
    

}