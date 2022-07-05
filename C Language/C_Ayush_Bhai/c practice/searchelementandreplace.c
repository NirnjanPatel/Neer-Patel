#include <stdio.h>
int main()
{
    int n, s, i,r;
    printf("enter size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("enter element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n enter elements you want to search\n");
    scanf("%d", &s);

    printf("enter no you want to replace \n");
    scanf("%d", &r);


for ( i = 0; i <n; i++)
{


if (a[i]==s)
{
    a[i]=r;
 
}
}

printf("enter update array is \n");
for ( i = 0; i <n; i++)
{
    printf("\t %d",a[i]);
}


    // if (s == a[i])
    // {
    //     a[i] = s;
    // }
    // else
    //     printf("no not found\n");

    // for (i = 0; i < n; i++)
    // {
    //     printf(" replace element array are %d\n", a[i]);
    // }
}