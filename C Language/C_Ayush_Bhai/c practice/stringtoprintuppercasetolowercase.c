#include<stdio.h>ed
#include<string.h>
int main()
{
    int i;
    char n[23];
printf("enter a string in upper case\n");
gets(n);
printf("value of n is %s",n);
for ( i = 0; i<strlen(n); i++)
{
    if (n[i]>=65 && n[i]<=90)
    {
        n[i]=n[i]+32;

    }
}
    printf("\n string in lower case %s",n);

}