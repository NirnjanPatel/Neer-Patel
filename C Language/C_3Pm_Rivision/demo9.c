#include <stdio.h>
void main()
{
  int x, y, z, res;
  printf("Enter the value of x,y and z\n");
  scanf("%d%d%d", &x, &y, &z);
  res = (x == y) && (x == z) && (y == z);
  printf("Logical AND is : %d\n", res);

  res = (x == y) || (x == z) || (y == z);
  printf("Logical OR is : %d\n", res);

  res = !((x == y) || (x == z) || (y == z));
  printf("Logical NOT is : %d\n", res);
}
