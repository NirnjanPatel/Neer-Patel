//print array elements in ascending order
#include<stdio.h>
void main()
{
  int arr[10];
  int j,i,temp;
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
  
  for(i=0;i<10;i++)
  {
      for(j=i+1;j<10;j++)
      {
        if(arr[i]>arr[j])
        {
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
  }
  printf("\n Asscending order array elements is : \n");
  for(i = 0;i<10;i++)
  {
    printf("%d\t",arr[i]);
  } 
  printf("\n"); 
}
