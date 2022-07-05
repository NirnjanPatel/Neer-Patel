// Function definition
#include <stdio.h>
void addition();
void main() // getch in conio.h
{
    addition();
    printf("\n");
    addition();
}
void addition()
{
    int a, b, sum = 0;
    printf("Enter a & b = ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Sum = %d", a + b);
}