#include<stdio.h>
void fun(int[] ,int );
void main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
     
int a[n] ,i;
printf("enter array elements \n");
     for ( i = 0; i <n; i++)
     {
        scanf("%d",&a[i]);

     }
     fun(a,n);   //isme a[0] , ya first element jaega array ka 
}
void fun(int b[],int n)
{
int i,max=0;
for (i = 0; i <n; i++)
{
    if (b[i]>max)
    {
        max=b[i];
    }
    
}

    printf("max elements of array is  =%d",max);
}