//Sum of array elements 
#include<stdio.h>
void main()
{
  int arr[10];
  int i;
  printf("Enter array element is : \n");
  for(i = 0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  } 
  
  printf("Array Element is : \n");
  for(i = 0;i<10;i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");
}
