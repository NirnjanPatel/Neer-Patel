#include<stdio.h>
void add(int,int);
void main()
{
  printf("Enter Value of x and y : ");
  scanf("%d%d",&x,&y);
  
  add(x,y);  //call by actual parameter
}
void add(int x,int y)  //x and y formal parameter
{
  printf("Addition is : %d\n",(x+y));
}
/*
   actual parameter and formal parameter may be same
*/
