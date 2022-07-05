#include<stdio.h>
int main()
{
char n1[15], n2[15],i;
printf(" enter name \n");
gets(n1);

for ( i = 0; n1[i]!='\0'; i++)
{
    n2[i]=n1[i];

}
printf("%s",n2);
}