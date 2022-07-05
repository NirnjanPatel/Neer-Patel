#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;

};
void main()
{
struct student s={ 8,"jenny",98.62};
struct student *ptr=&s;

printf("info of s\n");
printf("%d  %s  %f\n",ptr->rollno,ptr->name,ptr->marks);
}