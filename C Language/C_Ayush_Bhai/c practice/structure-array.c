#include<stdio.h>
struct emp
{
    int eno;
    char n[10];
    float sal;
    };


void main()
{
    struct emp e[20];
    int i;

    for (i=0;i<5;i++)
    {
        printf("\n Enter employees details");
        printf("\nEmployee no.=");
        scanf("%d",&e[i].eno);
        printf("\n Enter salary=");
        scanf("%f",&e[i].sal);

        printf("\n enter emp name...");
     
        getchar();
        gets(e[i].n);
    }
    for(i=0;i<5;i++)
    {

       printf("\n Serial no. =%d",i);
        printf("\n Name =%s",e[i].n);
        printf("\n Employee id =%d",e[i].eno);
        printf("\n Salary =%f",e[i].sal);

    }
    }
