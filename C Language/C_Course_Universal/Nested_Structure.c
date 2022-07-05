// Nested Structure
#include <stdio.h>
struct Student
{
    char name[45];
    int rno;
    float per;
    struct address
    {
        int house_no;
        char city[45];
    } add;
};
void main()
{
    struct Student std;
    int i, num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d Student Details\n", i + 1);
        printf("Enter Name : ");
        scanf("%s", std.name);
        printf("Enter Roll no. : ");
        scanf("%d", &std.rno);
        printf("Enter Per. : ");
        scanf("%f", &std.per);

        printf("Enter House No : ");
        scanf("%d", &std.add.house_no);
        printf("Enter City Name : ");
        scanf("%s", std.add.city);
    }

    for (i = 0; i < num; i++)
    {
        printf("-----------%d Student Details-----------\n", i + 1);
        printf("Name : %s\n", std.name);
        printf("Roll No. : %d\n", std.rno);
        printf("Per. : %0.2f\n", std.per);
        printf("House No.: %d\n", std.add.house_no);
        printf("City : %s\n", std.add.city);
    }
    printf(" \n");
}