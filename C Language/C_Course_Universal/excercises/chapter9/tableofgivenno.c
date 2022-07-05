#include <stdio.h>
int main()
{
    int no, i = 1;
    printf("Table of : ");
    scanf("%d", &no);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", no, i, no * i);
        i++;
    }

    return 0;
}
