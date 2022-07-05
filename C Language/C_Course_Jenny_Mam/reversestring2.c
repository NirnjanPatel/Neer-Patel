#include <stdio.h>
#include <string.h>
int main()
{
    int l, i,j;

    char s1[30], c;
    printf("Enter string = ");
    gets(s1);
    l = strlen(s1);
    for (i = 0, j = l - 1; i < j; i++,j--)
    {
        c = s1[i];
        s1[i] = s1[j];
        s1[j] = c;
    }
        printf("%s", s1);
}