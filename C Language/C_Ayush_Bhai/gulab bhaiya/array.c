#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter the array elements\n");
  for ( i=0; i<5; i++)
  {
    scanf("%d",&a[i]);
  }

for ( i = 0; i < 5; i++)
{
  printf("values of array at%d are:%d\n",i,a[i]);
}
// for ( i=5; i>=0; i--)
// {
  // printf("values of array at%d are:%d\n",i,a[i]);
}

