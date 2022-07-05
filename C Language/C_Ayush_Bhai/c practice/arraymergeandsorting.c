#include<stdio.h>
int main()
{
    int i,n,m,z,temp,j;
    printf("enter size first and second array:\n");
    printf("first array size:");
    scanf("%d",&n);
    printf("second array size:");
    scanf("%d",&m);
    z=m+n;
    int c[z];
    int a[n];
      printf("enter array elements\n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
      printf("enter array size\n");
    
    int b[m];
      printf("enter array elements\n");
    for ( i = 0; i <m; i++)
    {
        scanf("%d",&b[i]);
        c[n+i]=b[i];
    }
       printf("array elements ARE\n");
    for ( i = 0; i <z; i++)
    {
        printf("%d\t",c[i]);
    }

    
    for ( i = 0; i <z-1; i++)
    {
        for ( j = 0; j <z-1; j++)
        {
            if (c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
            
        }
        
    }
    printf("sorting value of c is :\n");
    for ( i = 0; i <z; i++)
    {
        printf("%d\t",c[i]);
    }
    
    
}