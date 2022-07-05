#include<stdio.h>
void main()
{
   int arr[3][3];
   arr[0][0] = 10;
   arr[0][1] = 20;
   arr[0][2] = 30;
   
   arr[1][0] = 40;
   arr[1][1] = 50;
   arr[1][2] = 60;
   
   arr[2][0] = 70;
   arr[2][1] = 80;
   arr[2][2] = 90;
   
   printf("%d\t",arr[0][0]);
   printf("%d\t",arr[0][1]);
   printf("%d\n",arr[0][2]);
   
   printf("%d\t",arr[1][0]);
   printf("%d\t",arr[1][1]);
   printf("%d\n",arr[1][2]);
   
   printf("%d\t",arr[2][0]);
   printf("%d\t",arr[2][1]);
   printf("%d\n",arr[2][2]);
}


