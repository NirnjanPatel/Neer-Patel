// swap using third variable
#include <stdio.h>
int main()
{
    int n1, n2, temp;
    printf("enter a & b : ");
    scanf("%d%d", &n1, &n2);
    printf("Before swap : ");
    printf("a = %d\nb = %d\n", n1, n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("After swap : ");
    printf("a = %d\nb = %d", n1, n2);
}