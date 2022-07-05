// For taking more than one student details
#include <stdio.h>
struct Student
{
    char name[45];
    int rno;
    float per;
};
void main()
{
    struct Student std1, std2, std3;

    printf("Enter 1st Student Details : \n");
    printf("Enter Name : ");
    gets(std1.name);
    printf("Roll No. : ");
    scanf("%d", &std1.rno);
    printf("Per : ");
    scanf("%f", &std1.per);

    printf("Enter 2nd Student Details : \n");
    printf("Enter Name : ");
    scanf("%s", std2.name);
    printf("Roll No. : ");
    scanf("%d", &std2.rno);
    printf("Per : ");
    scanf("%f", &std2.per);

    printf("Enter 3rd Student Details : \n");
    printf("Enter Name : ");
    gets(std3.name);
    printf("Roll No. : ");
    scanf("%d", &std3.rno);
    printf("Per : ");
    scanf("%f", &std3.per);

    printf("---------------First Student Details----------------");
    printf("Name : %s", name);
    printf("Roll No.  : %d", rno);
    printf("Per : %f", per);

    printf("---------------Second Student Details----------------");
    printf("Name : %s", name);
    printf("Roll No.  : %d", rno);
    printf("Per : %f", per);

    printf("---------------Third Student Details----------------");
    printf("Name : %s", name);
    printf("Roll No.  : %d", rno);
    printf("Per : %f", per);
}

// char name;
// printf("Enter Name : ");
// scanf("%c", &name);
// printf("Name = %c\n", name);

// char name1[34];
// printf("Enter Name1 : ");
// scanf("%s", name1);
// printf("Name1 = %s\n", name1);

// char name3[45];
// printf("Enter Name3 : ");
// gets(name3);
// printf("Name3 = %s\n", name3);