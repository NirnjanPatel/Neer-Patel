#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age,marks;
printf("Enter Your Age\n");
scanf("%d",&age);
printf("Enter Your Marks\n");
scanf("%d",&marks);
switch (age)
{
case 18:
printf("Your Age is 18\n");
switch (marks)
{
case 66: printf("Your MArks are 66\n");
    break;
default:
printf("Your MArks are 66\n");
    break;
}

case 14:
printf("Your Age is 14\n"); 
break;
default:
printf("Your Age is not 14 nor 18\n");
}
return 0;
}
