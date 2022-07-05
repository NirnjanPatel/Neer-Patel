#include<stdio.h>

float fact(int n)
{
    float f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
int j,n;
float sum=0;
printf("enter n value\n");
scanf("%d",&n);
for ( j=1; j<=n; j++)
{
  float a = 1/fact(j); 
  sum=sum+a;     
}
printf("series is %f",sum);


}