#include<stdio.h>
int main()
{
    float lastmonth,currentmonth,charges,bill;
    printf("the value of last month and current month \n");
    scanf("%f%f",&currentmonth,&lastmonth);

    charges=currentmonth-lastmonth;
    printf("%f\n",charges);
    if (charges>=0&&charges<=100)
   
    {
      bill=charges*2;
      printf("bill 1 :%f\n",bill);
    }
    else if (charges>=101&&charges<=200)
   
    {
      bill=charges*3;
      printf("bill 2 :%f\n",bill);
    }
    else if (charges>=201&&charges<=300)

    {
      bill=charges*4;
      printf("bill 3 :%f\n",bill);
    }
    else {
     bill=charges*5;
      printf("bill 4 :%f\n", bill);}
}