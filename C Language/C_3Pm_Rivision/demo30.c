#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=5;j++)
     {
       if(j==3)
       {
         break;
       }
       printf("i : %d\tj : %d\n",i,j);
     }
  }
  printf("Bye....\n");
}
