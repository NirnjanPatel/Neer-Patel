#include<stdio.h>
#include<stdlib.h>

int main()
{
    // int a[30];
int i ,n,*ptr;
printf("enter total no of values\n");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));

printf("enter the values\n");
for ( i =0; i <n; i++)
{
    scanf("%d",(ptr+i));
}
printf("enter values are\n");
for ( i =0; i <n; i++)
{
    printf("%d\t",*(ptr+i));
}
free(ptr);
}

