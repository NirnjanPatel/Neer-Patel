#include<stdio.h>
int main()
{
    int i,j ;
   int  a[5];
    int temp;
    for ( i = 0; i <5 ; i++)
    {
     printf(" enter elements \n");
    scanf("%d",&a[i]);
    }

for ( i = 0; i <5; i++)
{
    for ( j =i+1; j <5; j++)
    {
        if (a[i]>a[j])
        {
           temp=a[j];
           a[j]=a[i];
           a[i]=temp;
        }

    }
    }
    printf("\n sorted list");
    for ( i = 0; i <5; i++)
    {
        printf("\t %d",a[i]);
    }
    }