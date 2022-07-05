#include<stdio.h>
int main()
{
    char n[15],i;
     printf("enter name\n");
     gets(n);
     for ( i = 0; n[i]!='\0'; i++)
     {
         printf("\n %c",n[i]);
     }
     
}