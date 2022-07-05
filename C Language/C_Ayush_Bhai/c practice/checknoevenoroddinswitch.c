#include<stdio.h>
int main()
{
    int n;
    printf("enter a no to check whether it is even or odd\n");
    scanf("%d",&n);

    switch (n%2) //if n%2 divide it means rem=0 else odd .
    {
    case 0:
        printf("no is even\n");
        break;
    case 1:
        printf("no is odd \n");
        break;
    
    default:
    printf("invalid");
        break;
    }
}