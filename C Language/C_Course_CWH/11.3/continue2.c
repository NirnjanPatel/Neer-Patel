#include <stdio.h>
int main()
{
    int i, age;
    printf("Hello World\n");
    for (i = 0; i < 10; i++)
    {
        printf("\n%dEnter your age\n", i);
        scanf("%d", &age);
        break;

        if (age > 10)
        {
            continue;
        }
        printf("we do not have any continue statement");
        printf("Hello World\n");
    }
      printf("Hello World\n");

    return 0;
}
