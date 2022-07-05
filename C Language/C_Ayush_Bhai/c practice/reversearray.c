#include <Stdio.h>
int main()
{
    int i, n,temp;
    printf("enter size of array\n");
    scanf("%d", &n);
    int a[n];

    printf("enter element of array \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("print elements of array without reversing\n");
    for (i = 0; i < n; i++)
    {
        printf("\t %d", a[i]);
    }

    for (i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n - i-1] = temp;
    }

    printf("\nprint elements of array with reversing\n");
    for ( i = 0; i <n; i++)
    {
    printf("\t %d",a[i]);
    }  
    
}