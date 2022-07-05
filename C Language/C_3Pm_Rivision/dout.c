#include<stdio.h>
void main()
{
  char *p;
  p = "hello";
  printf("%s\n",*&*&p);
}
