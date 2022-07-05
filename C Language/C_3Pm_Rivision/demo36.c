#include <stdio.h>
void display(int);
void main()
{
  display(10); // call by value
  int num;
  num = 20;
  display(num); // call by value or call by actual parameter

  printf("Enter Any Value : ");
  scanf("%d", &num);

  display(num);
}
void display(int x)
{
  printf("Value of x is : %d\n", x);
}
