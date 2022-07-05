// 50 to 1 in reverse
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    while (i = 50, i >= 1)
    {
        i++;
        printf("\t %d", i);
    }

    return 0;
}
