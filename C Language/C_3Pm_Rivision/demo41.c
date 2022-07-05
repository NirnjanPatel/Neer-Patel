#include<stdio.h>
void swap(int *,int *);
void main()
{
   int x,y;
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   
   printf("Before Swaping value of x is : %d\n",x);
   printf("Before Swaping value of y is : %d\n",y);

   swap(&x,&y); // call by refernce
   
   printf("After Swaping value of x is : %d\n",x);
   printf("After Swaping value of y is : %d\n",y);
}
void swap(int *p,int *q)  // p = &x and q = &y
{
   int z;
   z = *p;
   *p = *q;
   *q = z;
}
