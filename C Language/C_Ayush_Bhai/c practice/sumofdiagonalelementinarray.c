#include<Stdio.h>
int main()
{
    int i,j,a[3][3],sum=0,sum1=0;
 
printf("enter elements of array\n");
    for ( i = 0; i <3; i++)
    {
     for ( j = 0; j <3; j++)
     {
       scanf("%d",&a[i][j]);
     }
     
    }
printf("elements of array are :\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("%d\t",a[i][j]);
        }
       printf("\n"); 
    }
  printf("\nleft diagonal elements of array are as follows\n");
  for ( i = 0; i <3; i++)
  {
      for ( j = 0; j <3; j++)
      {
         if (i==j)
         {
     printf("%d\t",a[i][j]);
      sum=sum+a[i][j];
         }
         
      }
      
  }
  printf("\nsum of left diagonal of array is %d",sum);
    printf("\nright diagonal elements of array are as follows\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            if (i+j==2)
            {
                printf("%d\t",a[i][j]);
                sum1=sum1+a[i][j];
            }
            
        }
        
    }
   printf("\nsum of right  diagonal of array is %d",sum1); 
}