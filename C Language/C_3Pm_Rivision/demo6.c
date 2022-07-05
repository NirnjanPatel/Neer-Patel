#include <stdio.h>
void main()
{
  int x, y, z;
  printf("Enter the value of x and y ");
  scanf("%d%d", &x, &y); // x = 20 and y = 30;
  z = x + y;             // z = 20+30 => 50
  z = x * y;             // z = 20*30 => 600
  z = x - y;             // z = 20-30 => -10
  z = x / y;             // z = 20/30 => 0
  z = x % y;             // z = 20 % 30 =>20

  printf("Addition is : %d\n", z);
  printf("Multiplication is : %d\n", z);
  printf("Substraction is : %d\n", z);
  printf("Division is : %d\n", z);
  printf("Modules is : %d\n", z);
}
