#include<stdio.h>
int sumofseries(int r)
{
    int i ,s=0;
// printf("enter no of terms\n");
// scanf("%d",&n);
for ( i =1; i<=r; i++)
{
    printf("%d+",i);
    s=s+i;
}
// printf("sum=%d",s);
return s;
}
void main()
{
 int n ;
printf("enter no of terms\n");
scanf("%d",&n);
    int q= sumofseries(n);
    printf("sum=%d",q);
}