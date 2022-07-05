#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;

}s3={2};
void main()
{

struct student s1={1,"jenny",98.6};
// struct student s2={2,"jiya",78.2};
struct student s2;
printf("enter info for s2\n");
scanf("%d  %s  %f",&s2.rollno,&s2.name,&s2.marks);


// s2=s1;

printf("info for s1\n");
printf("%d   %s   %f\n",s1.rollno,s1.name,s1.marks);

printf("info for s2\n");
printf("%d   %s   %f\n",s2.rollno,s2.name,s2.marks);


printf("info for s3\n");
printf("%d   %s   %f\n",s3.rollno,s3.name,s3.marks);


}
