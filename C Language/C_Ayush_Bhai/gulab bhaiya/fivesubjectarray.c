#include<stdio.h>
int main()
{
    int i ;
    float a;
    float marks[5];
    float avg, sum=0;
    // scanf("%d",&a);
    // printf("%d",a);
    printf("enter the five subjects value of array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&marks[i]);
    }
    for ( i=0; i<5; i++)
    {
         printf("marks of %d is : %0.2f\n",i,marks[i]);
       sum=sum+marks[i];
    }
    printf("sum is : %0.2f",sum);
    avg=sum/5;
    printf("avg marks of subject is %0.2f:",avg);
    

}