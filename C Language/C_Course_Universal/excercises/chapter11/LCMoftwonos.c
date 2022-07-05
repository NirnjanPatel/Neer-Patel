// Find LCM of two nos
#include <stdio.h>
int main()
{
    int no1, no2, max;
    printf("Enter two nos : ");
    scanf("%d%d", &no1, &no2);
    max = (no1 > no2) ? no1 : no2;
    while (1)
    {
        if (max % no1 == 0 && max % no2 == 0)
        {
            printf("LCM of %d and %d is %d\n", no1, no2, max);
            break;
        }
        max++;
    }
}
