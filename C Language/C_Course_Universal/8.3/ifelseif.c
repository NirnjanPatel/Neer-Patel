// if else if statement with using operators
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z;
printf("ENter Value of x =");
scanf("%d",&x);
y=(x-=2);
printf("Value of y=%d\n",y);
z=++x;
printf("Value of z=%d\n",z);
z=!(x<=y)?x:y;
printf("Value of z=%d\n",z);
if (x>=y)
{
printf("Value of x=%d\n",x);
}
else printf("Value of z=%d\n",z);
    return 0;
}
