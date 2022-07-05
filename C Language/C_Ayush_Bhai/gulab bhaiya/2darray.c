#include<stdio.h>
void main()
{
  int arr[20][20],r,c,i,j;
  printf("Enter rows and coloums:");
  scanf("%d%d",&r,&c);

  printf("Enter elements of array:\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }


  printf("Elements of the array are:");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d",arr[i][j]);
      }
    //   printf("\n");
  }
}