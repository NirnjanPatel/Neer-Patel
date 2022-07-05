#include <stdio.h>
void main()
{
  int i, x, y, p = 1;

  printf("Enter the value of x and y...\n");
  scanf("%d%d", &x, &y);
  i = 1;
  while (i <= y)
  {
    p = p * x;
    i++;
  }
  printf("Power is : %d\n", p);
}

/* x = 5 & y = 4;
 i = 1----->1<=4-->true--->p = p * x
                             = 1 * 5 => 5---->i++
 i = 2---->2<=5--->true---> p = 5 * 5 => 25----->i++
 i = 3---->3<=5--->true---> p = 25 * 5 => 125----->i++
 i = 4---->4<=5--->true---> p = 125 * 5 => 625----->i++
*/
