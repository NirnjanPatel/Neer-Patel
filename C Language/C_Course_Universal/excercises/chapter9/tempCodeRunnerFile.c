// Table of Given number
#include <stdio.h>
int main()
{
    int i, num;
    printf("Table of number : ");
    scanf("%d", &num);
    while (i <= 10)
    {
        i++;
        printf("%d", num);
    }
    return 0;
}
