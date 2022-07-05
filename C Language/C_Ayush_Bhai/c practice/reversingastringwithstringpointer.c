#include<stdio.h>

int main()
{

char n[50],rev[50];
int j, i=0;
printf("enter a name\n");
gets(n);

for ( i = 0; n[i]!='\0'; i++)
{

}
j=i-1;

for ( i = 0; n[i]!='\0'; i++)
{
    rev[i]=n[j];
    j--;
    printf("%c",rev[i]);
}
// puts(rev);
}