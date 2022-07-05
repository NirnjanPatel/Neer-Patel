#include<stdio.h>
int main()
{
    int i ,j, a[3][3],b[3][3];
    printf("enter elements of array\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
            
        }


    }
    printf("enter the original matrix\n");
    for ( i = 0; i <3; i++)
    {
        printf("\n");
        for ( j = 0; j <3; j++)
        {
            printf("%d\t",a[i][j]);
            
        }
        
    }

for ( i = 0; i <3; i++)
{
  for (j = 0; j<3;j++)
  {
      b[j][i]=a[i][j];
  }
  
}
printf("\ntranspose of matrix is \n");
for ( i = 0; i < 3; i++)
{
    printf("\n");
    for ( j = 0; j < 3; j++)
    {
    printf("%d\t",b[i][j]);
    }
    
}



}