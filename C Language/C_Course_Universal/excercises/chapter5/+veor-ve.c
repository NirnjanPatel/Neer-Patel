#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("a is +ve\n");
    }
    else
        printf("a is -ve\n");
    return 0;
}
