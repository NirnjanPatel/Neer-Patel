#include<stdio.h>
struct Student
{
  int roll;
  char name[30];
  float fees;
};
void main()
{
  struct Student std,std1,std2; //local object
  
  printf("Enter 1st Student Record");
  printf("Enter Student Roll No : ");
  scanf("%d",&std.roll);
  printf("Enter Student Name : ");
  scanf("%s",std.name);
  printf("Enter Student Fees : ");
  scanf("%f",&std.fees);
  
  printf("Enter 2nd Student Record");
  printf("Enter Student Roll No : ");
  scanf("%d",&std1.roll);
  printf("Enter Student Name : ");
  scanf("%s",std1.name);
  printf("Enter Student Fees : ");
  scanf("%f",&std1.fees);
  
  printf("Enter 3rd Student Record");
  printf("Enter Student Roll No : ");
  scanf("%d",&std2.roll);
  printf("Enter Student Name : ");
  scanf("%s",std2.name);
  printf("Enter Student Fees : ");
  scanf("%f",&std2.fees);
  
  printf("1st Student Record \n");
  printf("Student Roll No is : %d\n",std.roll);
  printf("Student Name is : %s\n",std.name);
  printf("Student Fees is : %f\n",std.fees);
  
  printf("2nd Student Record \n");
  printf("Student Roll No is : %d\n",std1.roll);
  printf("Student Name is : %s\n",std1.name);
  printf("Student Fees is : %f\n",std1.fees);
  
  printf("3rd Student Record \n");
  printf("Student Roll No is : %d\n",std2.roll);
  printf("Student Name is : %s\n",std2.name);
  printf("Student Fees is : %f\n",std2.fees);
}
