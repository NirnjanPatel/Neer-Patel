// Struct_Using_Function
#include <stdio.h>

struct Student
{
    char name[34];
    int rno;
    float per;
};
struct Student std; // Global variable
void getStudentDetails();
void showStudentDetails();

void main()
{
    getStudentDetails();
    showStudentDetails();
}
void getStudentDetails()
{
    printf("Enter Student name : ");
    scanf("%s", std.name); // We can't use & when getting a string from user
    printf("\nEnter Student Roll no. : ");
    scanf("%d", &std.rno);
    printf("\nEnter Student Percentages : ");
    scanf("%f", &std.per);
}
void showStudentDetails()
{
    printf("\n!!!!!!!........Student Details........!!!!!!!\n");
    printf("Name : %s\n", std.name); // By %s we can only take one word before space
    printf("Roll no. : %d\n", std.rno);
    printf("Percentages : %0.2f% \n", std.per);
}