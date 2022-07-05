#include<stdio.h>
#include<string.h>
int main()
{
    char n[15],n1[20];
    printf("enter a string\n");
    gets(n);
    // strcpy(n1,n);
    // printf("copied string is %s",n1);
    printf("copied string is %s",strcpy(n1,n));
}