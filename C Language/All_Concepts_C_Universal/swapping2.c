// Prg. To Print Swapping of Two Numbers  
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter Two Numbers : ");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("After Swapping \na = %d\nb = %d\n",a,b);
return 0;
}
