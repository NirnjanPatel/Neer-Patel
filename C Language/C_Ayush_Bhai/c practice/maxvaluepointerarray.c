#include<stdio.h>
void fun(int*, int );
int main()
{
    int n;
    printf("enter array size\n");
    scanf("%d",&n);

    int a[n],i;

       printf("enter array elements \n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);   
    }

   fun(a,n);

}
void fun(int*p, int n)
{
    int i,max=0;
     for ( i = 0; i <n; i++)
     {
         if (*p>max)

         {
            max=*p;
     }
            p++;
         }
         printf("\n max value of array is %d",max);
     
}