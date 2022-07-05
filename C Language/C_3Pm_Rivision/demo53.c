//find the maximum and minimum element in given using function with pointer 
#include<stdio.h>
void show(int *);
void main()
{
  int arr[10] = {13,21,9,73,5,10,7,3,11,22};
  show(arr); 
}
void show(int *ar)  // ar = &arr
{
  int sum = 0,max,min;
  max = *ar;
  min = *ar;
  printf("Array element is : \n");
  for(int i=0;i<10;i++)
  {
     printf("%d\t",*ar);
     if(max<*ar)
     {
        max = *ar;
     }
     if(min > *ar)
     {
        min = *ar;
     }
     ar++;
  }
  printf("\nMaximum array element is : %d\n",max);
  printf("Mninimum array element is : %d\n",min);
}
