#include<stdio.h>
struct emp
{
    int empno;
    char n[10];
    float salary;


};

int main()
{

struct emp e1;
printf("enter employee details\n");
    scanf("%d%f",&e1.empno,&e1.salary);

    printf("enter name of employee\n");
    getchar();
    gets(e1.n);


printf("\n enter details of employee\n");
printf("empno=%d\n",e1.empno);
printf("empname=%s\n",e1.n);
printf("enter salary of employee %f\n",e1.salary);

}