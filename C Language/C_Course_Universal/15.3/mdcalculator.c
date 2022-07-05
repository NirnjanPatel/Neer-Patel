// Menu Driven programme to creat a calculator
#include <stdio.h>
int main()
{
    int a, b, c, choice;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Mod\n");
    scanf("%d", &choice);
    printf("Enter Two Values : ");
    scanf("%d %d", &a, &b);
    switch (choice)
    {
    case 1:
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        break;
    case 2:
        c = a - b;
        printf("%d - %d = %d\n", a, b, c);
        break;
    case 3:
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
        break;
    case 4:
        c = a / b;
        printf("%d / %d = %d\n", a, b, c);
        break;
    case 5:
        c = a % b;
        printf("%d % %d = %d\n", a, b, c);
        break;

    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}
