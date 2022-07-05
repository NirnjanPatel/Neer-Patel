#include<stdio.h>
#include<string.h>
int main()
{
    char n[15],m[15];
    printf("enter string\n");
    gets(n);
    strupr(n);
    printf("string length=%s",n);
}