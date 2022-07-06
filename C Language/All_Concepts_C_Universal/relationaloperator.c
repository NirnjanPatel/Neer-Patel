// Relational Operator (> < >= <= == ! )
#include<stdio.h>
int main()
{
int a,b,c;
printf("Value of A,B and C is = \n");
scanf("%d%d%d",&a,&b,&c);
printf("A is Equal To B = %d\n",a==b);
printf("A is Not Equal To B = %d\n",!(a==b));
printf("A is Greater Than Equal To B = %d\n",(a>=b));
return 0;
}