// A to Z with difference of 4 characters
#include <stdio.h>
int main()
{
    int i;
    for (i = 65; i <= 122; i += 4)
    {
        printf("%c\n", i);
    }

    return 0;
}
