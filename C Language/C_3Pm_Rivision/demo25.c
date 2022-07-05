#include<stdio.h>
void main()
{
  int i,a,b,c,num;
  a = 0;
  b = 1;
  
  printf("Enter Any number...\n");
  scanf("%d",&num);
  
  for(i=1;i<=num;i++)
  {
     printf("%d\n",a);
     c = a+b;
     a = b;
     b = c;
  }
}
