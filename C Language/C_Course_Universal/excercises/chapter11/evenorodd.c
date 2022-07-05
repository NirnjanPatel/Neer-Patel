// Check a no is even or odd
#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no : ");
    scanf("%d", &no);
    switch (no % 2)
    {
    case 0:
        printf("Number is even\n");
        break;
    case 1:
        printf("Number is odd\n");
    }
}