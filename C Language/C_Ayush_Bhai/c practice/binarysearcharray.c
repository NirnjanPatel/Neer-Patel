#include<stdio.h>
int main()
{
    int i,n,l=0,m,temp=0;
    printf("enter size of array\n");
    scanf("%d",&n);

int a[n],s,h=n-1; 
    printf("enter elements of array\n");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("enter element that you want to search\n ");
scanf("%d",&s);

for ( i = 0; i <n; i++)
{
    m=(l+h)/2;

   if (s==a[m])
   {
 temp=1;
 break;
   }
   else if (s>a[m])
   {
       l=m+1;
   }
   else
   h=m-1;
}
if (temp==1)
{
    printf("no is present\n");
}
else
printf("no is not present\n");
}