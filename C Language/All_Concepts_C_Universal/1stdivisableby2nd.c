// Programme to check wheather a number is dividale by second or not
#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Enter X and Y\n");
    scanf("%d%d", &x, &y);

    if (x % y == 0)
    {
        printf("x is divisable by y\n");
    }
    else
        printf("x is not divisable by y\n");
    return 0;
}
