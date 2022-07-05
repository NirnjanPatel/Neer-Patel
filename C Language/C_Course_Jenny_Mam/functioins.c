#include<stdio.h>
int sum()
{
    int a, b, c;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    c = a + b;
    printf("Sum = %d\n",c);
}
int main()
{
    sum();
    printf("Hii Neer\n");
    sum();
}