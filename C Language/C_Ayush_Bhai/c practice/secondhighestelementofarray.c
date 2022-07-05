#include<stdio.h>
int main()
{
int n,temp,i,j;
printf("enter size of array\n");
scanf("%d",&n);
int a[n];
for ( i = 0; i <n; i++)
{
   scanf("%d",&a[i]);
}


for ( i = 0; i <n; i++)
{
for ( j = 0; j <n-1; j++)
{
    if (a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;   
    }  
}
}

for ( i = 0; i <n; i++)
{
  printf("%d\t",a[i]);
}
printf("\nsecond highest element of array is %d\n",a[n-2]);
}