#include <stdio.h>
int main()
{
    unsigned int a;
    for (; a < 255; a++)
    {
        printf("corresponding of %ld is %c\n", a, a);
    }
    return 0;
}
