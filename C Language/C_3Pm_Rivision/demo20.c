#include <stdio.h>
void main()
{
  int i, num, f = 1;

  printf("Enter Any Number...\n");
  scanf("%d", &num);
  i = 1;
  while (i <= num)
  {
    f = f * i;
    i++;
  }
  printf("Factorial is : %d\n", f);
}
/* num = 5;
 i = 1----->1<=5-->true--->f = f * i
                             = 1 * 1=> 1---->i++
 i = 2---->2<=5--->true---> f = 1 * 2=>2----->i++
 i = 3---->3<=5--->true---> f = 2 * 3=>6----->i++
 i = 4---->4<=5--->true---> f = 6 * 4=>24----->i++
 i = 5---->5<=5--->true---> f = 24 * 5=>120----->i++
 i = 6 --->6<5======>false
*/
