#include<stdio.h>
int main()
{
    int a;
    printf("enter the no\n");
    scanf("%d",&a);

switch (a)
{
case 1:
printf("day is mon\n");
break;
case 2:
printf("day is tues\n");
break;
case 3:
printf("day is wed \n");
break;
case 4:
printf("day is thrus\n");
break;
case 5:
printf("day is frid\n");
break;
case 6:
printf("day is sat\n");
break;
case 0:
printf("day is sun\n");
break;
default:
printf("none of these days\n");
    break;
}

}