#include<stdio.h>
int main()
{
    int a;
    printf(" enter a  no \n");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("no is even \n");

        break;
    
    default:
    printf("no is odd \n ");
       
    }
}