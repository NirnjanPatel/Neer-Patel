#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    c = a++ + ++b;
    printf("c = %d\n", c);
    c = ++b - --b - --a + a++;
    printf("c = %d\n", c);
    c = ++a * --b - a++ / --a;
    printf("c = %d\n", c);
}