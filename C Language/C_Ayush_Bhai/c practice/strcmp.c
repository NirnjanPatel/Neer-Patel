#include<stdio.h>
#include<string.h>

int main()
{
    char n1[20],n2[20];

    printf("who is inventer of c\n");
  gets(n1);
    printf("who is inventer of c\n");
  gets(n2);
    // printf("%s",n);
    if(strcmp(n1,n2)==0)
    printf("both are same\n");
    
    else
    printf("\nstring are unequal");
    
}