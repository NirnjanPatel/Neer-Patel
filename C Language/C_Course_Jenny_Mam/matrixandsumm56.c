#include<stdio.h>
int main()
{
int matrix[2][2],i,j,sum=0;

printf("Enter The Elements of matrix : ");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
scanf("%d", &matrix[i][j]);
}
printf("Metrix form : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)

{
    
    printf("%d\t", matrix[i][j]);
    
    sum=sum + matrix[i][j];
    
}
printf("\n");
}

printf("Sum = %d\n",sum);
}