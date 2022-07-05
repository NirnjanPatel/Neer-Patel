#include <stdio.h>
void add(int *, int *);
void main()
{
   int x, y;
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);

   add(&x, &y); // call by refernce
}
void add(int *p, int *q) // p = &x and q = &y
{
   int z;
   z = *p + *q;
   printf("Addition is : %d\n", z);
}
