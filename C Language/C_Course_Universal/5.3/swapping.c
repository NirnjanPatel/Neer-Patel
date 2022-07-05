// Prg. To Print Swap Two Numbers without using 3rd variable
#include<stdio.h>
void main()
{
int a,b;
printf("\nEnter Two Nos=\n");
scanf("%d%d",&a,&b);
a=a+b,b=a-b,a=a-b;
printf("After swapping a = %d,b = %d",a,b);
}
