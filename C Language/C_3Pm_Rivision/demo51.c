#include<stdio.h>
void show(int *);
void main()
{
  int arr[10] = {10,20,30,40,50,60,70,80,90,100};
  show(arr); 
}
void show(int *ar)  // ar = &arr
{
  printf("Array element is : \n");
  for(int i=0;i<10;i++)
  {
     printf("%p : %d\n",ar,*ar);
     ar++;
  }
}
