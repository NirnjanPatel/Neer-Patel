#include<stdio.h>
int main()
{
    char ch;

    printf("enter  ch value\n");
    scanf("%c",&ch);
    // printf("enter :");
    //  scanf("%c",&ch);
    if (ch>97&&ch<122)
    {
printf("ch is in lower case\n");
    }
    else if (ch>65&&ch<90)
    {
        printf(" ch is in upper case\n");
    }
    else if(ch>48&&ch<57)
    printf(" a is no\n");


    else
    printf("invalid\n");
    
}