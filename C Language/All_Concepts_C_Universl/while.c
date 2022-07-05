#include <stdio.h>
int main()
{
    int a;
    printf("ENter a : ");
    scanf("%d", &a);

    while (a < 55)
    {
        printf("%d\n", a);
        a = a + 1;
    }
    return 0;
}
