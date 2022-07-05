#include <stdio.h>
void main()
{
  int x;
  int *ptr1;
  int **ptr2;

  printf("Address of x is : %p\n", &x);
  printf("Address of ptr1 is : %p\n", &ptr1);
  printf("Address of ptr2 is : %p\n", &ptr2);

  x = 10;
  printf("\nValue of x is : %d\n", x);

  ptr1 = &x;
  printf("\nValue of ptr1 is : %p\n", ptr1);
  printf("Value of *ptr1 is : %d\n", *ptr1);

  ptr2 = &ptr1;
  printf("\nValue of ptr2 is : %p\n", ptr2);
  printf("Value of *ptr2 is : %p\n", *ptr2);
  printf("Value of **ptr2 is : %d\n", **ptr2);
}
