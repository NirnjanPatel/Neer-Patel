#include<stdio.h>
struct  time{

    int hour;
    int min;
    int sec;


};

struct date{
int tarik;
int month;
int year;

    struct time t;
};
int main()
{
struct date e[3];
int i ,q,r,s,t;
for ( i = 0; i < 2; i++)
{

printf("enter tarik .....\n");
scanf("%d",&e[i].tarik);

printf("enter month .....\n");
scanf("%d",&e[i].month);
printf("enter year .....\n");
scanf("%d",&e[i].year);


printf("enter  time``");
scanf("%d",&e[i].t.hour);
scanf("%d",&e[i].t.min);
scanf("%d",&e[i].t.sec);
}
for ( i = 0; i <2; i++)
{


printf("following are the details\n");
printf("todays date is =%d\n",e[i].tarik);
printf("todays date is =%d\n",e[i].month);
printf("todays date is =%d\n",e[i].year);
printf("todays hrs is =%d\n",e[i].t.hour);
printf("todays min is =%d\n",e[i].t.min);
printf("todays sec is =%d\n",e[i].t.sec);
}

for ( i = 0; i < 1; i++)
{
    q=((e[i].t.hour)*60)-((e[i+1].t.hour)*60);
    r=(e[i].t.min)-(e[i+1].t.min);
    s=((e[i].t.sec)/60)-((e[i+1].t.sec)/60);


printf("diff in q is %d\n",q);
printf("diff in r is %d\n",r);
printf("diff in s is %d\n",s);
}
     t=q+r+s;
printf("diff in t is %d\n",t);

}

