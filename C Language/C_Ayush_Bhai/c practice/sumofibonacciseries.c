#include<stdio.h>
int main()
{
 int n,a=0,b=1,c,i,sum=1;
 printf("enter a nos of terms \n");
 scanf("%d",&n);
 printf("fibonacci series =%d%d",a,b);
 for ( i =3; i<=n; i++)
 {                             //0 1 1 2 3 5 8 
     c=a+b; //0+1=1  2           a b c
     printf("%d",c);//1     2      a b c
     sum=sum+c;//2 4
     a=b;
     b=c;
 }
 printf("\n sum of fibonacci series is :%d",sum);
    
}