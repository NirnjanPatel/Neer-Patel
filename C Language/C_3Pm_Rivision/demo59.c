#include<stdio.h>
struct Demo
{
  int x;
  char ch;
  float f1;
}d; //global object
//struct Demo d;  //global object
void main()
{
  //struct Demo d; //local object
  printf("Enter Any Charcter,int value and float value");
  scanf("%c%d%f",&d.ch,&d.x,&d.f1);
  
  printf("Value of x is : %d\n",d.x);
  printf("Value of ch is : %c\n",d.ch);
  printf("Value of f1 is : %f\n",d.f1);
}
/*
  Demo : It is structure Name
  d : It is object name

   object : it is responsible for memory allocation of all data which are present in inside the structure.
*/
