#include<stdio.h>
int main()
{
    int i,n,s,temp=0; 
    printf("size of array is \n");
    scanf("%d",&n);
 int a[n];
 printf("enter elements of array is \n");
 for ( i = 0; i <n; i++)
 {

 scanf("%d",&a[i]);
} 
printf("enter element you want to search\n");
scanf("%d",&s);
for ( i=0; i<n; i++)
{
if (s==a[i])
{
   printf("found element is %d",s);
   temp=1;

   break;
}
}
if (temp==1)
   printf("\nno is present\n");
else
printf("no is not present\n");

}