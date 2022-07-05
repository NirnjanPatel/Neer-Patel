#include <stdio.h>
void indore(); // function decalarations
void bhopal();
void khargone();
void main()
{
   bhopal();
   khargone();
}
void indore()
{
   printf("Indore Called....\n");
}
void bhopal()
{
   printf("Bhopal Called....\n");
   indore();
}
void khargone()
{
   indore();
   printf("Khargone Called....\n");
}
