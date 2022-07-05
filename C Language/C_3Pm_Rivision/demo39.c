#include<stdio.h>
void main()
{
   int x;
   int *ptr;
   x = 20;
   printf("Address of x is : %p\n",&x); //0x7ffc2f254d1c
   printf("Value of x is : %d\n",x);  //20
   
   ptr = &x;
   printf("Value of ptr is : %p\n",ptr); //0x7ffc2f254d1c
   printf("Value of *ptr is : %d\n",*ptr); //20

}
