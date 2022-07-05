#include<stdio.h>
struct Student
{
  int roll;
  char name[30];
  float fees;
};
void main()
{
  struct Student std[3]; //Array of object
  int i;
  for(i=0;i<3;i++)
  {
     printf("Enter %d Student Record\n",(i+1));
     printf("Enter Student Roll No : ");
     scanf("%d",&std[i].roll);
     printf("Enter Student Name : ");
     scanf("%s",std[i].name);
     printf("Enter Student Fees : ");
     scanf("%f",&std[i].fees);
  }
  for(i=0;i<3;i++)
  {
    printf("%d Student Record \n",(i+1));
    printf("Student Roll No is : %d\n",std[i].roll);
    printf("Student Name is : %s\n",std[i].name);
    printf("Student Fees is : %f\n",std[i].fees);
  }
}
