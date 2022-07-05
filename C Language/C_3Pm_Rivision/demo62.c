//struct with function
#include<stdio.h>
#include<string.h>
struct Student
{
  int roll;
  char name[30];
  float fees;
};
struct Student getStudent(struct Student);
void showStudent(struct Student);
void main()
{
   struct Student std;
   std = getStudent(std);
   showStudent(std);
}
struct Student getStudent(struct Student s) //s = std
{
  printf("Enter Student Name : ");
  gets(s.name);
  printf("Enter Student Roll No : ");
  scanf("%d",&s.roll);
  printf("Enter Student Fees : ");
  scanf("%f",&s.fees);

  return s;
}
void showStudent(struct Student st) //st = std
{
  printf("Student Roll No is : %d\n",st.roll);
  printf("Student Name is : ");
  puts(st.name);
  printf("Student Fees is : %f\n",st.fees);
}
