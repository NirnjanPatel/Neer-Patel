#include<stdio.h>
int main()
{
int a[3][2],i,j,sr,sc;
printf("Enter elements of matrix :\n");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Matrix is :\n");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<=2;i++)
{
    sr=sc=0;
    for(j=0;j<=2;j++)
    {
        sr = sr + a[i][j];
        sc = sc + a[j][i];
    }
    printf("SumRow = %d , SumCol = %d",sr,sc);
    printf("\n");
}
}