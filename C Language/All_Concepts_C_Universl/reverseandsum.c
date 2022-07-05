#include <stdio.h>
int main()
{
    int no, rev = 0, rem, div;
    printf("Enter no : ");
    scanf("%d", &no);
    div = no / 1000;
    rem = rev % 1000;
    rev = rem * 1000 + div;
    printf("Reverse = %d\n", rev);
}