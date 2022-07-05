//struct with function
#include<stdio.h>
struct Student
{
  int roll;
  char name[30];
  float fees;
};
struct Student std; //global object
void getStudent();
void showStudent();
void main()
{
   getStudent();
   showStudent();
}
void getStudent()
{
  printf("Enter Student Roll No : ");
  scanf("%d",&std.roll);
  printf("Enter Student Name : ");
  scanf("%s",std.name);
  printf("Enter Student Fees : ");
  scanf("%f",&std.fees);
}
void showStudent()
{
  printf("Student Roll No is : %d\n",std.roll);
  printf("Student Name is : %s\n",std.name);
  printf("Student Fees is : %f\n",std.fees);
}
