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
    int i,min=*p;
    // printf("%d\t",min);
    // printf("%d",*p);
     for ( i = 0; i <n; i++)
     {
         if (*p<min)

         {
            min=*p;
         }
         p++;
     }
         printf("\n min value of array is %d",min);
     
}