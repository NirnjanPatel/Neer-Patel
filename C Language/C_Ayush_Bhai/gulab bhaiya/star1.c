// *
// **
// ***
// ****
#include<stdio.h>


int main()
{
    int n;
    printf("enter the vaue of n\n");
    scanf("%d",&n);
    // run this loop for n times 
    for (int i = 0; i < n; i++)
    {
        // printf("i+1")stars
        for (int j = 0; j < i+1; j++)
        {
           printf("*");  
        }
        
        printf("\n");
    }
  return 0;  
}