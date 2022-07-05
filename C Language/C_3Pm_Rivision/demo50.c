#include<stdio.h>
void main()
{
  int arr[10];
  printf("0 indexing address is : %p\n",&arr[0]);
  printf("Base address is : %p\n",&arr);
  printf("Base address is : %p\n",arr);
}
