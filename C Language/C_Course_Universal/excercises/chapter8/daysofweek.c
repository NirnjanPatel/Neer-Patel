#include <stdio.h>
int main()
{
    char days;
    int choice;
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6.Saturday\n7.Sunday\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf(" Today is Monday");
        break;
    case 2:
        printf(" Today is Tuesday");
        break;
    case 3:
        printf(" Today is Wednesday");
        break;
    case 4:
        printf(" Today is Thursday");
        break;
    case 5:
        printf(" Today is Friday");
        break;
    case 6:
        printf(" Today is Saturday");
        break;
    case 7:
        printf(" Today is Sunday");
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}
