#include <stdio.h>
int main()
{
    int a[5];
    float b[7];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Arrays of a : ");
        scanf("% d ", &a);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Arrays of b : ");
        scanf("% d ", &b);
    }
    return 0;
}
