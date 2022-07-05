#include<stdio.h>
int main()
{
    int a[10],i;
    int even=0,odd=0;
    printf("enter array elements\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even++;
        }
        else
        odd++;
    }
    printf("total no of even terms is :%d\n",even);
    printf("total no of odd terms is :%d",odd);

    
}