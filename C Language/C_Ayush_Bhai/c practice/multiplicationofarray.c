#include<stdio.h>
void main(){
int i,j,r1,c1,r2,c2,k,a[10][10],b[10][10],c[10][10];
printf("enter  rows and column of first array\n");
scanf("%d %d",&r1,&c1);
printf("enter  rows and column of second array\n");
scanf("%d %d",&r2,&c2);
if (c1==r2)
{
  printf("enter elements of first  array \n");
  for ( i = 0; i <r1; i++)
  {
      for ( j = 0; j <c1; j++)
      {
       scanf("%d",&a[i][j]);
      }
      
  }
  
  
  printf("enter elements of second array \n");
  for ( i = 0; i <r2; i++)
  {
      for ( j = 0; j <c2; j++)
      {
       scanf("%d",&b[i][j]);
      }
      
  }
  
  printf(" elements of first array  are as follows \n");
  for ( i = 0; i <r1; i++)
  {
      for ( j = 0; j <c1; j++)
      {
       printf("%d\t",a[i][j]);
      }
      printf("\n");
  }


  printf(" elements of second array  are as follows \n");
  for ( i = 0; i <r2; i++)
  {
      for ( j = 0; j <c2; j++)
      {
       printf("%d\t",b[i][j]);
      }
      printf("\n");
  }
  
  
for ( i = 0; i<r1; i++)
{
   for ( j = 0; j<c2; j++)
   {
    c[i][j]=0;
       for(k=0;k<c1;k++)
       {
       
c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
   }
}
printf("enter resultant matrix:\n");
for ( i = 0; i <r1; i++)
{
  for (j = 0; j <c2 ; j++)
  {
    printf("%d\t",c[i][j]);
  }
  printf("\n");
}

}
else
printf("matrix multiplication is not possible\n");
}