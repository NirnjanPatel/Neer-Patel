// Bill 
#include<stdio.h>
int main()
{
    float q,r,b,d,net;
    printf("Enter Quantity\n");
    scanf("%f",&q);
    printf("Enter Rate\n");
    scanf("%f",&r);
    b=q*r;
if (b>=100000)
{d=b*15/100;}
else if (b>=50000)
{d=b*10/100;}
else if (b>=15000)
{d=b*10/100;}
else if (b<=10000)
{d=b*5/100;}
else d=b*2/100;
net=b-d;
printf("Quantity = %0.1f\n",q);
printf("Rate = %0.1f\n",r);
printf("Bill = %0.1f\n",b);
printf("Discount = %0.1f\n",d);
printf("Net Amount = %-23.1f neer\n",net);
return 0;
}