#include<stdio.h>
int sumofsquare(int r)
{
int i,s=0;
for ( i =1;i <r;i++)
{
    printf("%d",i);
    s=s+i*i;
    }
printf("sum=%d",s);
return s;
}
void main()
{
    int n ;
    printf("enter no of terms\n");
    scanf("%d",&n);
   int w= sumofsquare(n);
   printf("sum=%d",w); 
}