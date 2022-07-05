#include<stdio.h>
int main()
{
int arr1[5],arr2[5],sumarr[5],i;
printf("Values of 1st Array : ");
for(i=0;i<5;i++)
scanf("%d",&arr1[i]);

printf("Values of 2nd Array : ");
for(i=0;i<5;i++)
scanf("%d",&arr2[i]);


for(i=0;i<5;i++)
{
    sumarr[i] = arr1[i] + arr2[i];

printf("Third Array element at index %d is = %d\n",i,sumarr[i]);
}
}