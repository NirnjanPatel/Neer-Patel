#include<stdio.h>
int main()
{
    // int a[10]={25,6,98,68,7,25,63,72,88,20};
    int i ,max,a[10];
    printf("enter elements of array\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
        for(i=0;i<5;i++)
        {
         if (a[i]>max)
         max=a[i];
        } 
        printf("%d\n",max);
        
}
    
