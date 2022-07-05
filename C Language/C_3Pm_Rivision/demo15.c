#include <stdio.h>
void main()
{
   int x, z;

   x = 5;
   printf("Value of x is : %d\n", x); // 5

   z = x++;
   printf("Value of z is : %d\n", z); // 5
   printf("Value of x is : %d\n", x); // 6

   z = ++x;
   printf("Value of z is : %d\n", z); // 7
   printf("Value of x is : %d\n", x); // 7
}
