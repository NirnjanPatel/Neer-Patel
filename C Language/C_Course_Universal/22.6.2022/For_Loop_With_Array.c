// Getting more than one student details using for loop
#include <stdio.h>
struct Student
{
    char name[34];
    int rno;
    float per;
};

void main()
{
    int i;
    struct Student std;
    for (i = 0; i < 3; i++)
    {
        printf("Enter %d Student Details\n", i + 1);
        printf("Enter Name : ");
        scanf("%s", std.name);
        printf("Enter Roll No.: ");
        scanf("%d", &std.rno);
        printf("Enter Per : ");
        scanf("%f", &std.per);
    }

    for (i = 0; i < 3; i++)
    {
        printf("-----------%dStudent Details-----------\n", i + 1);
        printf("Name = %s\n", std.name);
        printf("Roll No = %d\n", std.rno);
        printf("Per =  %f\n\n", std.per);
    }
    printf("\n");
}
