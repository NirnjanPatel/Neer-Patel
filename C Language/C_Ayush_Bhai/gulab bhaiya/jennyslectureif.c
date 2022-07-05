#include<stdio.h>
int main()

{
    int age;
 printf("enter age\n");
 scanf("%d",&age);
 if (age>20&&age<30)
 {
     printf("your age is %d",age);
     printf("you can go coffee with me\n");
 }
 if (age>15)
 {
     printf("your age is %d\n",age);
     printf("its time to go home \n");
 }
 
 
}