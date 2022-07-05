#include<stdio.h>
int main()
{
char co;
int age;
printf("Enter Your Country\n");
scanf("%c",&co);

if(co=='I'||co=='i')
{printf("Enter Your Age\n");
scanf("%d",&age);

else
printf("You Can't Vote");
{if (age>=18)
printf("You Can Vote\n");
else printf("You Can't Vote");
}
return 0;
}