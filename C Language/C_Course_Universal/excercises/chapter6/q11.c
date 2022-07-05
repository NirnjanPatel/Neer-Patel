// Programme to print final values of a,b and c using following operators
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    printf("Enter value of c\n");
    scanf("%d", &c);
    // Now apply operators
    c = a++ + ++b;
    printf("Value of c = %d\n", c);
    c = ++b - --a + a++;
    printf("Value of c = %d\n", c);
    c = ++a * --b - a++ / --a;
    printf("Value of c = %d\n", c);
    return 0;
}
