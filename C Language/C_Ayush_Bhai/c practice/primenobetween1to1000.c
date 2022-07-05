#include<stdio.h>
int main()
{
    int i,j,count,n;
printf("enter no range\n");
scanf("%d",&n);
    for ( i = 1; i <=n; i++)   //i=1  i=2
    {
        count=0;
        for ( j = 1; j <=i;j++)   //j=1
        {
          if (i%j==0)
           count++;     //1
        } 
        if (count==2)
        {
           printf("%d\t",i);
        }
        
        
    }
    
}