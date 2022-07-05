// Reverse any digit using for loop
#include <stdio.h>
int main()
{
    int no, i, l, rev = 0, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &no);
    while (no > 0)
    {
        l = no % 10;        //
        rev = rev * 10 + l; //
        no = no / 10;       //
        sum = sum + l;      //
    }
    printf("%d\n", rev);
    printf("Sum = %d\n", sum);
    if (rev == no)
    {
        printf("No is palindrome\n");
    }
    else
        printf("No is not palindrome\n");

    return 0;
}
