#include<stdio.h>
int main()
{
int arr1[5];
int arr2[5];
int arr3[5];
int i;
printf("Enter values of first array :  "); 
for(i=0;i<5;i++)
scanf("%d",&arr1[i]);
printf("Enter values of first array :  ");
for(i=0;i<5;i++)
scanf("%d",&arr1[i]);
for(i=0;i<5;i++)
{
    arr3[i]=arr1[i]+arr2[i];
printf("Index %d is = %d\n",i,arr3[i]);
}
}