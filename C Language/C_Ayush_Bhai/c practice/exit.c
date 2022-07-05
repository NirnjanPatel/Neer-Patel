#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i > 5)
        {
            exit(5);
        }
        printf("%d", i);
        i++;
    }
    printf("hello india");
}