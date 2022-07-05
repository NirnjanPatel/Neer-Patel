#include<stdio.h>
void main()
{
int num,i,j,a[15];
printf("enter a no\n");
scanf("%d",&num);
i=0;
while (num!=0)       //5   //2
{                   // 5/2=1
    a[i]=num%2;   // a[0]=    //0
    num=num/2;  //    2  //1
    i++;
}
for ( j =i-1; j>=0; j--)
{
    printf("%d",a[j]);
}
}