#include<stdio.h>
void hello();  //function decalarations
void main()
{
   printf("Main Called....\n");
   hello();
   hello();
   printf("Main Ended....\n");
}
void hello()
{
   printf("Hello Called....\n");
}
