#include<stdio.h>

struct address
{
    int houseno;
    char city[20];
    char state[20];
};

struct person
{
 char name[20];
int age;
int contactno;
 struct  address a; 
};



void main()
{
struct person p;
printf("enter emp name\n");
getchar();
gets(p.name);
printf("enter age and contact no of emp\n");
scanf("%d%d",&p.age,&p.contactno);
printf("enter house no of emp\n");
scanf("%d",&p.a.houseno);
printf("enter city and state of employee\n");
getchar();
gets(p.a.city);
gets(p.a.state);


printf("\n emp details .....\n");
printf("\n emp name=%s",p.name);
printf("\n emp age=%d",p.age);
printf("\n emp contact no=%d",p.contactno);
printf("\n emp =houseno %d",p.a.houseno);
printf("\n emp =houseno %s",p.a.city);
printf("\n emp =houseno %s",p.a.state);

}