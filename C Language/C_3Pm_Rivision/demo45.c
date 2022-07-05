//Sum of array elements 
#include<stdio.h>
void main()
{
  int arr[10] = {10,20,30,40,50,60,70,80,90,100};
  int sum = 0;
  
  for(int i = 0;i<10;i++)
  {
    printf("%d\n",arr[i]);
    sum = sum + arr[i];
  } 
  printf("Sum of array elements is : %d\n",sum);
}
