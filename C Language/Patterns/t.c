#include <stdio.h>
void main()
{
    int age;
    char ch;
    printf("Enter Nationality : ");
    scanf("%c", &ch);
    if (ch == 'i' || ch == 'I')
    {
        printf("Enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("You are Eligible to vote\n");
        }
        else if (age <= 14 && age >= 17)
        {
            printf("You are Eligible for 12th\n");
        }
        else
            printf("You are Eligible for 12th\n");
        //     else
        //         printf("You are not Eligible\n");
    }
    else
        printf("You are Not indian\n");
}