#include <stdio.h>
void main()
{
   int x, z;

   x = 5;
   printf("Value of x is : %d\n", x); // 5

   z = x++ + ++x;
   printf("Value of z is : %d\n", z);
   printf("Value of x is : %d\n", x);
}
/*
   z = 5++ + ++x;
   z = 5 + 1+6
   z = 5 +  7
*/
