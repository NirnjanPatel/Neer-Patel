// typedef function
#include <stdio.h>
struct Student_Result_And_Details
{
    char name[45];
    int rno;
    float per;
};
typedef struct Student_Result_And_Details SRAD;

SRAD getStudentDetails(SRAD);
void showStudentDetails(SRAD);

void main()
{
    SRAD ob;
    SRAD objj = getStudentDetails(ob);
    showStudentDetails(objj);
}

SRAD getStudentDetails(SRAD obj)
{
    printf("Enter  Name : ");
    scanf("%s", obj.name);
    printf("Enter  Roll No : ");
    scanf("%d", &obj.rno);
    printf("Enter  Per : ");
    scanf("%f", &obj.per);

    return obj;
}

void showStudentDetails(SRAD objj)
{
    printf("------------- Student Details-------------\n");
    printf("Name : %s\n", objj.name);
    printf("Roll no. : %d\n", objj.rno);
    printf("Per : %.2f\n", objj.per);
}