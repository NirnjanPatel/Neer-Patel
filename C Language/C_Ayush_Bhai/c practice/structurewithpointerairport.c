#include<stdio.h>
struct airline
{
    int flightno;
    char originatingac[3];
    char destinationac[3];
    float startingtime;
    float arrivaltime;
};0
int main()
{
    struct airline a[200];
    struct airline *p; 
     p=&a;
    int i,n;
 
    for ( i = 0; i <2; i++)

    {
        // printf("no %d person\n",i);
 printf("enter flight no\n ");
 scanf("%d",&p->flightno);
 printf("enter originatingac\n ");
 getchar();
 gets(p->originatingac);
 printf("enter destinationac\n ");
  
gets(p->destinationac);
 printf("enter startingtime\n ");
 scanf("%f",&p->startingtime);
 printf("enter \arrivaltime\n ");
 scanf("%f",&p->arrivaltime);
    }

printf("Details are as follows");
    for ( i = 0; i < 2; i++)
    {
printf("flightno = %d\n",p->flightno);
printf("originating  = %s\n",p->originatingac);
printf("destination  =%s\n",p->destinationac);
printf("starting time %f\n",p->startingtime);
printf("arrival time %f\n",p->arrivaltime);
// printf("\n");
    }
}