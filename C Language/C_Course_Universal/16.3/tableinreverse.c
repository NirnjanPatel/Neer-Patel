// Table of given number in reverse format
#include <stdio.h>
int main()
{
    int i, no;
    printf("Table of : ");
    scanf("%d", &no);
    for (i = 10; i > 1; i--)
    {
        printf("%d x %d = %d\n", no, i, no * i);
    }

    return 0;
}
