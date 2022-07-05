#include <stdio.h>
void main()
{
   int x;
   float y;
   char ch;
   double z;
   long int li;

   x = 10;
   y = 12.23;
   ch = 'A';
   z = 22.45;
   li = 11;
   printf("int x is : %d\n", x);
   printf("long int li is : %ld\n", li);
   printf("float y is : %f\n", y);
   printf("float y is : %.3f\n", y);
   printf("double z is : %lf\n", z);
   printf("char ch is : %c\n", ch);
}
