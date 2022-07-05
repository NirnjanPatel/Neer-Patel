#include<stdio.h>
void fun(int [],int );
int main()
{
    int n,i;
    printf("enter array size\n");
    scanf("%d",&n);
    int a[n];
    printf("enter array element \n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
        
    }
    fun(a,n);
}

void fun(int a[],int n)
{

    int key,freq=0,i;
 printf(" array elements \n");
    for ( i = 0; i <n ; i++)
    {
      printf("%d\t",a[i]);
    }

    printf("\nenter element you want to search\n");
    scanf("%d",&key);

    for ( i = 0; i < n; i++)
    {
       if (a[i]==key)
       {
          freq++;
       }
       
    }
    printf("no of times element has occur %d\n",freq);
}