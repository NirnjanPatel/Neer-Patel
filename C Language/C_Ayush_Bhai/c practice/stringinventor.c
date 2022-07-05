#include<stdio.h>
#include<string.h>
int main()
{
char n[20]="dennis ritchie";
char n1[20];
printf("who is inventer of c\n");
gets(n1);
if(strcmp(n,n1)==0)
printf("good\n");
else
printf("try again");
}