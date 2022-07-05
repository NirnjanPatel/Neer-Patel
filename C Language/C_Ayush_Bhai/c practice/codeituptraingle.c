#include<stdio.h>
int main()
{
    int i ,j,k,n;
     printf("enter no of terms \n");
      scanf("%d",&n);
      for ( i = 1; i <=n; i++)
      {
      for ( j = 1; j <=n-i; j++)
      {
          printf(" ");
      }
      for ( k = 1; k <=2*i-1; k++)
      {
         printf("%d",i);
      }
      printf("\n");
      }
      
}
//     *
//    ***
//   *****
//  *******
// *********


//     1    
//    123   
//   12345  
//  1234567 
// 123456789