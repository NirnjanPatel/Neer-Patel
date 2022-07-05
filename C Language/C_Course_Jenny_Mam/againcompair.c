// Compare Two Strings Using Our Own Logic on runtime initialization
#include <stdio.h>
#include <string.h>
int main()
{
    int i,flag=0;
    char s1[30], s2[30];
    printf("Enter String s1 = ");
    gets(s1);
    printf("Enter String s2 = ");
    gets(s2);
    for (i = 0; s1[i] != '\0' && s2[i] != '\0';i++)
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    if(flag==0)
        printf("Strings are same");
else
    printf("Strings are not same");
}