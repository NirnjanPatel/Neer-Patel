// palindrome
#include<stdio.h>
void main()
{
    int  no,temp,last,sum=0 ;
    printf("Enter a number = ");
    scanf("%d" ,& no);
    temp = no;
    while(no>0)
    {
        last = no % 10;
        sum = (sum * 10) + last;
        no = no / 10;
    }
    if(temp==sum)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
}