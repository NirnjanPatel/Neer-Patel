#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if (ch>=97&&ch<=122)

    {
        printf("ch is in lower  case\n");
    }
    else if(ch>=65&&ch<=90)
    {
        printf("ch is in uppercase\n");
    }
    else
    printf("ch is in  not an alphabet \n");
    
}