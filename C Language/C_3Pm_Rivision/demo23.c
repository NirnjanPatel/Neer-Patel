#include<stdio.h>
void main()
{
  int i,num;
  printf("Enter Any number....\n");
  scanf("%d",&num);
  
  i = 1;
  do
  {
     printf("%d * %d = %d\n",num,i,num*i);
     i++;
  }while(i<=10);
  printf("Bye...\n");
}
