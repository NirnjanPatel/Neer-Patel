// even or odd using if else
#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no : ");
    scanf("%d", &no);
    if (no % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
}