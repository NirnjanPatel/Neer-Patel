#include<stdio.h>

void strrev(char*p);
int main()
{
char n[20];
printf("enter a name\n");
gets(n);
strrev(n);
}
void strrev(char*p){
    char rev[20];
int i,j;

for ( i = 0; *p!='\0'; i++)
{
    printf("\n %c",*p);
    p++;
}
// p--;
printf("\n\n length=%d\n",i);
j=i-1;

for ( i = 0; i<=j; i++)
{
    rev[i]=*p;
    printf("\n %c",rev[i]);
    p--;
    }
printf("reverse of a string is %s",rev);

}