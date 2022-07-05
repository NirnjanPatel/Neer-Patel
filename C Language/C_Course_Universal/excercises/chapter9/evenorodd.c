#include <stdio.h>
int main()
{
    int no;
    printf("Enter a Number : ");
    scanf("%d", &no);
    switch (no = no % 2 == 0)
    {
    case 1:
        printf("Number %d is Even\n", no);
        break;
    default:
        printf("Number %d is Odd\n", no);
        break;
    }
    return 0;
}
