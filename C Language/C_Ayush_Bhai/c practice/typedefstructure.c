#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char *names;
    float marks;

};
void main()
{
    struct student abc;
abc.rollno=8;
// strcpy(abc.names,"sachin");
abc.names="sachin";
abc.marks=96.2;

printf("rollno=:%d name=:%s marks=:%f",abc.rollno,abc.names,abc.marks);
   
}