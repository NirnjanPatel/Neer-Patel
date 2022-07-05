#include<stdio.h>
int main()
{
    int age,marks,eligibility;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    printf("Enter Your MArks : ");
    scanf("%d",&marks);

    switch (age)
    {
    case 18:
    printf("Your Age Is : 18\n");  break;
    switch (marks)
    {
    case 65:
    printf("Your Marks are : 65\n");
   break;
    default:
    printf("You Can Vote\n");
        break;
    }  
    case 20:
        printf("Your Age Is : 20\n");
    break;
    case 50:
        printf("Your Age Is : 50\n");    
    break;
    default:
        printf("Your Age Is not 3 , 33 or 50\n");    
    }
    return 0;
}
