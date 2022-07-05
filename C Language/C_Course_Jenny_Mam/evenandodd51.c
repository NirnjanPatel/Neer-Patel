#include<stdio.h>
void main()
{
int no[10],i;
int even=0,odd=0;
printf("Enter 10 numbers : ");
for(i=0;i<10;i++)
{
    scanf("%d",&no[i]);

if (no[i]%2 == 0)
even++;
else 
odd++;
}
printf("Total Even NUmbers = %d\n",even);
printf("Total Odd NUmbers = %d\n",odd);
}
