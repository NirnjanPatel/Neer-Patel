/*
  Assignment Operator : =.+=,-=,*=,/=,%=
   variable1 += variable2 => var1 = var1 + var2
*/
#include <stdio.h>
void main()
{
  int x, y, z;
  printf("Enter the value of x and y ");
  scanf("%d%d", &x, &y);                 // x = 20 and y = 30;
  x += y;                                // x = x+y =>20+30 =>50
  printf("Addition is : %d\n", x);       // 50
  x -= y;                                // x = x-y =>50-30 =>20
  printf("Substraction is : %d\n", x);   // 20
  x *= y;                                // x = x*y =>20*30 =>600
  printf("Multiplication is : %d\n", x); // 600
  x /= y;                                // x = x/y =>600+30 =>20
  printf("Division is : %d\n", x);       // 20
  x %= y;                                // x = x+y =>20%30 =>20
  printf("Modules is : %d\n", x);        // 20
}
