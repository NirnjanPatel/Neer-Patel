#include<stdio.h>
int main()
{
    float per ,a,b,c,d,e,t;
    printf("enter 5 subjects\n");
    printf("enter 1 subjects\n");
    scanf("%f",&a);
    printf("enter 2 subjects\n");
    scanf("%f",&b);
    printf("enter 3 subjects\n");
    scanf("%f",&c);
    printf("enter 4 subjects\n");
    scanf("%f",&d);
    printf("enter 5 subjects\n");
    scanf("%f",&e);
    t=a+b+c+d+e;
    per=t/5;
    if (per>=60)
    {

      printf("grade a \n");
    }
    else if  (per>=50)
    {

      printf("grade b \n");
    }
   else  if (per>=40)
    {

      printf("grade c\n");
    }
 
    
   else 
    {

      printf(" grade d \n");
    }
    
}