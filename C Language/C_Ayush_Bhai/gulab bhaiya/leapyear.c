#include<stdio.h>
int main()
{
    int n ;
    printf("enter the year\n");
    scanf("%d",&n);
    if (n%4==0)
    {
      if (n%100==0)
      {
        printf("no is not a leap year\n");
      }
       if(n%400==0)
      {
          printf("no is a leap year\n");
      }
      else 
      printf("no is a leap year\n");
      
    }
    
    
}