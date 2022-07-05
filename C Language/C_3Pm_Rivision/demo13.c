#include <stdio.h>
void main()
{
  int x, y, res;
  printf("Enter the value of x and y\n");
  scanf("%d%d", &x, &y);

  res = (x == y);
  if (!res) // 1 means true and 0 false
  {
    printf("Hello Students...\n");
  }
  else
  {
    printf("Bye Students....\n");
  }
  printf("Bye....\n");
}
