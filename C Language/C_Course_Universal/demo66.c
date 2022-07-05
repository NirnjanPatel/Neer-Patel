// struct with typedef function
#include <stdio.h>
#include <string.h>
struct India_MP_Indore_Universal_Student
{
  int roll;
  char name[30];
  float fees;
};
typedef struct India_MP_Indore_Universal_Student IMIUS;

IMIUS getStudent(IMIUS);
void showStudent(IMIUS);
void main()
{
  IMIUS std;
  std = getStudent(std);
  showStudent(std);
}
IMIUS getStudent(IMIUS s) // s = std
{
  printf("Enter Student Name : ");
  gets(s.name);
  printf("Enter Student Roll No : ");
  scanf("%d", &s.roll);
  printf("Enter Student Fees : ");
  scanf("%f", &s.fees);

  return s;
}
void showStudent(IMIUS st) // st = std
{
  printf("Student Roll No is : %d\n", st.roll);
  printf("Student Name is : ");
  puts(st.name);
  printf("Student Fees is : %f\n", st.fees);
}