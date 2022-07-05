#include<stdio.h>
void main()
{
  int i;
  for(i=1;i<=10;i++)
  {
     if(i==5)
     {
        break;
     }
     printf("Value of i is : %d\n",i);
  }
  printf("Bye....\n");
}
