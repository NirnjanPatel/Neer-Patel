// Programme to print larger number among three
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three numbers :");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("x is larger");
    }
    else if (y > z)
    {
        printf("y is larger");
    }
    else
        printf("z is larger");
    return 0;
}