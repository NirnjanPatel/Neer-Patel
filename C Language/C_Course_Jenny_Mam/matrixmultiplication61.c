#include<stdio.h>
#define N 50
int main()
{
int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
printf("Enter Rows and Columns for First Matrix : \n");
scanf("%d%d",&m,&n);
printf("Enter First Matrix : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter Rows and Columns for Second Matrix : \n");
scanf("%d%d",&p,&q);
printf("Matrix is : \n");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
printf("First Matrix is : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("Second Matrix is : \n");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
if(n!=q)
{
    printf("Can not multiply\n");
}
else
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
        }
    }
    printf("Multiplication is : \n");
}
for(i=0;i<m;i++)
{
    for(j=0;j<q;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}