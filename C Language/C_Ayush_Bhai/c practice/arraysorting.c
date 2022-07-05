#include<stdio.h>
int main()
{
    int i,j,size,temp;
    printf("enter size of array\n");
    scanf("%d",&size);
    int a[size];

    printf("enter elements of array\n");
    for ( i = 0; i <size; i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    for ( i = 0; i <size; i++) // 5 2 6
    {
        for ( j =i+1; j <size; j++)
        {
            if (a[i]>a[j])
            {
               temp=a[i];
                a[i]=a[j];
               a[j]=temp;

            }
            
        }
        
    }
    printf("elements of array are:\n");
    for ( i = 0; i <size; i++)
    {
        printf("%d",a[i]);
    }
    

    

}