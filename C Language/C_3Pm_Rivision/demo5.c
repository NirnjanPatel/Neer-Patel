#include <stdio.h>
void main()
{
   int x, y, z; // variable declarations
                /* printf("Enter the value of x : ");
                 scanf("%d",&x);
             
                 printf("Enter the value of y : ");
                 scanf("%d",&y); */

   printf("Enter the value of x and y : ");
   scanf("%d%d", &x, &y);

   z = x + y;
   printf("Value of z is : %d\n", z);
}
