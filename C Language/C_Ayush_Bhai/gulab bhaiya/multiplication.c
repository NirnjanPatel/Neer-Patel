#include<stdio.h>
// table of 6
// 6x1=6
// 6x2=12
int main()
{
    int num;
    printf("enter the number you want multiplication table of \n");
    scanf("%d",&num);
    printf("multiplication table of %d is as follows: \n",num);
/*
printf("%d X 1 =%d\n",num, num*1);
printf("%d X 2 =%d\n",num, num*2);
printf("%d X 3 =%d\n",num, num*3);
printf("%d X 4 =%d\n",num, num*4);
printf("%d X 5 =%d\n",num, num*5);*/

for (int  i = 1; i < 11; i++)
{
   printf("%d X %d =%d\n",num,i, num*i); 
}


}