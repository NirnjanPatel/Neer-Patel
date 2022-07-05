#include<stdio.h>
struct Demo
{
  int x;
  char ch;
  float f1;
};
void main()
{
  struct Demo d;
  d.x = 10;
  d.ch = 'A';
  d.f1 = 12.23;
  
  printf("Value of x is : %d\n",d.x);
  printf("Value of ch is : %c\n",d.ch);
  printf("Value of f1 is : %f\n",d.f1);
}
/*
  Demo : It is structure Name
  d : It is object name

   object : it is responsible for memory allocation of all data which are present in inside the structure.
*/
