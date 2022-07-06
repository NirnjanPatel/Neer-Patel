#include <stdio.h>
int main()
{
    printf("Hello WOrld\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter Your Age:\n", i);
        scanf("%d", &age);
        /* if (age > 10)
         {
             break;
         } */

        if (age > 10)
        {
            continue;
        }
        {
            printf("we not have come any cotinue statement\n");
            printf("we not have come any cotinue statement\n");
            printf("we not have come any cotinue statement\n");
        }
    }
    return 0;
}
