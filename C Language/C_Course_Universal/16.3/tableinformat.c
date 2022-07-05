// Table in format
#include <stdio.h>
int main()
{
    int i, no;
    printf("Table of : ");
    scanf("%d", &no);
    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", no, i, no * i);
    }

    return 0;
}
