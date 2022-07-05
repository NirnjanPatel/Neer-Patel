// Palindrome or not
#include<stdio.h>
void main()
{
int no,l,rev=0,temp;
printf("Enter a no. : ");
scanf("%d", &no);
temp = no;

for (int i = 0; i < no;i++)
{
    l = no % 10;
    rev = rev + l;
}
}
