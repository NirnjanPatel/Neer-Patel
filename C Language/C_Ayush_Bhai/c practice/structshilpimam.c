#include<stdio.h>
#include <string.h>

struct student {
    int rollno;
    char  n[10];
    float sal;
};
void  main()
{
struct  student emp={123,"jenny",30003};
// emp.rollno=123;
// emp.n="ayush";
//printf("type name\n");
//gets(emp.name);
//emp.sal=30000;
strcpy(emp.n,"alia");

printf(" details of emp are as follows ....\n");
printf("\nroll no of emp %d ",emp.rollno);
printf("\n sal of emp %f",emp.sal);
printf("\n name of  emp %s",emp.n);

}