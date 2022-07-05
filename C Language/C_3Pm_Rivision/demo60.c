#include<stdio.h>
struct Student
{
  int roll;
  char name[30];
  float fees;
};
void main()
{
  struct Student std; //local object
  
  printf("Enter Student Roll No : ");
  scanf("%d",&std.roll);
  printf("Enter Student Name : ");
  scanf("%s",std.name);
  printf("Enter Student Fees : ");
  scanf("%f",&std.fees);
  
  printf("Student Roll No is : %d\n",std.roll);
  printf("Student Name is : %s\n",std.name);
  printf("Student Fees is : %f\n",std.fees);
}
/*
  Demo : It is structure Name
  d : It is object name

   object : it is responsible for memory allocation of all data which are present in inside the structure.
*/
