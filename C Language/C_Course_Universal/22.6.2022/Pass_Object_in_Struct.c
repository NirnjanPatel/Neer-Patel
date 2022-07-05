// Passing_Object_in_Struct &
// Struct_Using_Function
#include <stdio.h>
#include <string.h>
struct Student
{
    char name[45];
    int rno;
    float per;
};
struct Student getStudentDetails(struct Student); // Function declaration
void showStudentDetails(struct Student);

void main()
{
    struct Student std;           // Local variable(By this we can't access properties of struct student outside.)
    std = getStudentDetails(std); // For that reason we are passing object to functions
    showStudentDetails(std);
}
struct Student getStudentDetails(struct Student std) // Function definition
// Here std stores properties of passed std
{
    printf("Enter Student Name : ");
    // scanf("%s", &std.name);
    // for taking full string we will use gets predifined function
    gets(std.name);
    printf("Enter Student Roll No. : ");
    scanf("%d", &std.rno);
    printf("Enter Student Percentages : ");
    scanf("%f", &std.per);

    return std; // Returning object from here
}
void showStudentDetails(struct Student s)
{
    printf("Student Details.........!!!!!!!!!!!\n");
    printf("Name : %s\n", s.name); // %s to print string
    printf("Roll no. : %d\n", s.rno);
    printf("percentages : %.2f\n%", s.per);
}