#include <stdio.h>
void main()
{
   int x, y, z; // variable declarations

   x = 10;
   y = 20;

   z = x + y;
   printf("Value of z is : %d\n", z);
   printf("Addition is : %d\n", (x + y));
   printf("%d + %d = %d\n", x, y, (x + y));
   printf("%d + %d = %d\n", x, y, z);
}
