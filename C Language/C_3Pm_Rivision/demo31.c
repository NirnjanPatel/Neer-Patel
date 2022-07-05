#include<stdio.h>
#include<stdlib.h>
void main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=5;j++)
     {
       if(j==3)
       {
         exit(0);
       }
       printf("i : %d\tj : %d\n",i,j);
     }
  }
  printf("Bye....\n");
}
