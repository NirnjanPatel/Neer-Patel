#include<stdio.h>
#include<string.h>
int main()
{
    char n1[2],n2[20];
    printf("enter first string\n");
    gets(n1);
    printf("enter second string\n");
    
    gets(n2);
    strcat(n2,n1);
    printf("resultant string is %s",n2);
}