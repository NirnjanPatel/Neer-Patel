#include<stdio.h>
void main()
{
    int marks[5], i;
    int sum = 0;
    float average;
    printf("Enter No. of Five Students : ");
    for (i = 0; i <= 4;i++)
scanf("%d",&marks[i]);
for(i=0;i<5;i++)
sum = sum + marks[i];
average = sum / 5;
printf("sum = %d\n",sum);
printf("average = %0.2f\n",average);
}