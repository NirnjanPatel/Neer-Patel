#include <stdio.h>
int sub()
{
    return 0;
}
int sum()
{
    int a, b, sum = 0;
    printf("Enter tow nos. : ");
    scanf("%d\t%d", &a, &b);
    // sub = a - b;  Can not used in other functoin
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}
int main()
{
    sum();
    printf("Called function so do again\n");
    sum();
    return 0;
}