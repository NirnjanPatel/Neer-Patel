#include<stdio.h>
int main()
{
 int n,a=0,b=1,c,i;
 printf("enter a nos of terms \n");
 scanf("%d",&n);
 printf("fibonacci series =%d%d",a,b);  
 for ( i =3; i <=n; i++)
 {
     c=a+b;   //1                           0112358
     printf("%d",c);   //1                  abc
     a=b;                                  //  ab
     b=c;
 }
 
    
}