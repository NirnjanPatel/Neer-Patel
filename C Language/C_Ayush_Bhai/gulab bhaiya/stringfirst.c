#include<stdio.h>
int main()
{
    // // char name[30]="jenny khatri";
    // char name [20]={'j','e','n','n','y','\0'};
    // printf("%s",name);



// char name[30];
// printf("enter string name\n");
// scanf("%s",name);
// printf("%s",name);



// char fname[30] ,lname[30];
// printf("enter string name\n");
// scanf("%s%s",fname,lname);
// printf("%s %s",fname,lname);


char name[30];
printf("enter string name\n");
scanf("%5s",name);
// gets(name);
printf("%s\n",name);
// printf("%0.7s\n",name);
// printf("%10.7s\n",name);
printf("%s\n",&name[2]);
// puts(name);
// puts(name);
}