#include<stdio.h>
struct employeerecord

{
   int eid;
   char ename[20];
   float esal;

};

int main()
{
    struct employeerecord r[4];
    int i;
    for ( i = 0; i <4; i++)
    {
 
    printf ("enter employee records\n");
    printf("employee number %d\n",i);
    scanf("%d",&r[i].eid);
    printf("enter employee name\n");
    getchar();
gets(r[i].ename);
printf("enter employee salary\n");
scanf("%f",&r[i].esal);

    } 



    for ( i = 0; i <4; i++)
    {
        // printf("eid=%s\t",r[i].ename);
         if((r[i].esal)>20000){
        printf("eid=%d\t",r[i].eid);
        printf("employee name is  %s\n",r[i].ename);
        printf("eid=%.2f\t",r[i].esal);
         }
        // printf("\n");
    }
    
    


}