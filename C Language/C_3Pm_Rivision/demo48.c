//find the maximum and minimum elements in given array 
#include<stdio.h>
void main()
{
  int arr[10],max,min;
  int i;
  printf("Enter array element is : \n");
  for(i = 0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  } 
  max = arr[0];
  min = arr[0];
  printf("Array Element is : \n");
  for(i = 0;i<10;i++)
  {
    printf("%d\t",arr[i]);
    if(max<arr[i])
    {
       max = arr[i];
    }
    if(min>arr[i])
    {
       min = arr[i];
    }
  }
  printf("\n");
  printf("Maximum element is : %d\n",max);
  printf("Minimum element is : %d\n",min);
}
