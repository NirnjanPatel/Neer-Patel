// Voting 
#include<stdio.h>
int main()
{
    char co;
    int age;
    printf("Enter Country\n");
    scanf("%c",&co);
    if (co=='i' || co=='I')
    {printf("Enter Age\n");
    scanf("%d",&age);

    {if (age>=18)
    {printf("You Can Vote\n");}
    else printf("You Can't Vote\n");}
}
    else printf("Sorry Other Countries can't vote\n");
    return 0;
}