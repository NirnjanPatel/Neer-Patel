// LCM of 2 nos
#include <stdio.h>
int main()
{
    int n1, n2, max;
    printf("enter two positive integer\n");
    scanf("%d%d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (1) // here 1 means loop will run infinite time
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("LCM of %d and %d is %d\n", n1, n2, max);
            break;
        }
        max++;
    }
}
