// No is palindrome or not

#include <stdio.h>
int main()
{
    int no, sum = 0, temp, r;
    printf("Enter a no : ");
    scanf("%d", &no);
    temp = no;
    while (no > 0)
    {
        r = no % 10;
        sum += (r * r * r);
        no = no / 10;
    }
    if (temp == sum)
        printf("No is Armstrong\n");
    else
        printf("No is not Armstrong\n");
}