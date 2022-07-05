#include<stdio.h>
void main()
{
   int arr[3][3];
   int i,j;
   printf("Enter Array Elements : \n");
   for(i=0;i<3;i++)
   {
      printf("%d Row Element is : ",i+1);
      for(j=0;j<3;j++)
      {
         scanf("%d",&arr[i][j]);
      }
   }
   printf("Array Element is : \n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d\t",arr[i][j]);
      }
      printf("\n");
   }
}
