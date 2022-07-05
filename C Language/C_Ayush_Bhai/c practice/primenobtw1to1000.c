#include <stdio.h>
int main()
{
    int i, j, num, count;
    for (i = 1; i <= 1000; i++)
    {
        count = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0 && i != 1) // 1
        {
            printf("%d\t", i);
        }
    }
}