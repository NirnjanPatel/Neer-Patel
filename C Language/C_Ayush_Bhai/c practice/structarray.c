#include<stdio.h>
struct  student
{
   int empno;
   char n[20];
   float salary;

};
int main()
{
struct student e[5];
int i;
for( i = 0; i<5; i++)
{
    printf("enter employee details \n");
    printf("enter employee no and salary\n");
    scanf("%d%f",&e[i].empno,&e[i].salary);
printf("enter employee name\n");
getchar();
gets(e[i].n);
}


printf("details of employee are as follows \n");
for ( i = 0; i<5; i++)
{
    printf("emoployee roll no are %d",e[i].empno);
    printf("emoployee salary are %f",e[i].salary);
    printf("emoployee name are %s",e[i].n);

}
}



