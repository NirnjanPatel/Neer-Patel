// Factorial of any number
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, num, fact;
    fact = i = 1;
    printf("Enter a Number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        fact = fact * i;
        i++;
        printf("Factorial of number %d is %d\n", num, fact);
    }

    return 0;
}
