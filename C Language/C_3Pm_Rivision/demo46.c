//Sum of array elements 
#include<stdio.h>
void main()
{
  int arr[10] = {10,20,30,50,50,60,70,80,90,100};
  int sum = 0;
  printf("Address of array element is : \n");
  for(int i = 0;i<10;i++)
  {
    printf("%d\n",&arr[i]);
  } 
  
  printf("\n Array Element is : \n");
  for(int i = 0;i<10;i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");
}
