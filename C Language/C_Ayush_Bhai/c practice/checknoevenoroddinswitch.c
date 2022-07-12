#include <stdio.h>
int main()
{
    int count1 = 0;
    int count2 = 0;
    int n, i;
    printf("enter a no to check whether it is even or odd\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        switch (n % 2) // if n%2 divide it means rem=0 else odd .
        {
        case 0:
            count1++;
            if ()
                printf("no is even\n");
            break;
        case 1:
            count2++;
            printf("no is odd \n");
            break;
        default:
            printf("invalid");
            break;
        }
    }
    printf("Even Numbers = %d\n", count1);
    printf("Odd Numbers = %d\n", count2);
}