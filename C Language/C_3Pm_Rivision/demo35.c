#include<stdio.h>
void fact();
void main()
{
  fact();
}
void fact()
{
  int f = 1,num;
  printf("Enter Any Number...\n");
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
  {
     f = f * i;
  } 
  printf("Factorial is : %d\n",f);
}
