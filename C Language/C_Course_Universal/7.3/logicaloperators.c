// Logical Operators (&& || ! ) 
#include<stdio.h>
int main()
{
int a,b,c;
printf("Values of A,B and C =\n");
scanf("%d%d%d",&a,&b,&c);
printf("A is Largest = %d\n",(a>b && a>c));
printf("A is +ve or Zero = %d\n",(a>0 || a==0));
printf("C is < than a and a is > than b =%d\n",(c>a && a>b));
return 0;
}
