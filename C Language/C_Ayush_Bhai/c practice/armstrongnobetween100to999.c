#include<stdio.h>
int main()
{
    int i,num,j,r;
    printf("armstrong no between 100 to 999 are : \n");
    
       for ( i = 100; i <=999; i++)                   //1<=100
       {
          int sum=0;
          num=i;
    while (num>0)
    {
   
r=num%10;    
  sum=sum+(r*r*r);    
 num=num/10;           
    }
        
if (i==sum)
printf("armstrong no is %d\t",i);
       }
    }