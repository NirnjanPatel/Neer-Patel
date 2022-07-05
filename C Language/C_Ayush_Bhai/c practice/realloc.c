#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i ,*ptr1;
    printf("enter total no  value of n \n");
    scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));

printf("enter the values\n ");
for ( i = 0; i <n; i++)
{
    scanf("%d",(ptr+i));
}

printf("enter update size of n\n");
scanf("%d",&n);

// printf("enter the values\n ");
// for ( i = 0; i <n; i++)
// {
//     scanf("%d",(ptr+i));
// }

 ptr1=(int*)realloc(ptr,n*sizeof(int));


printf("previous address:%d, new address :%d",ptr,ptr1);
printf("enter the values are\n");
for ( i = 0; i <n; i++)
{
    printf("%d\t",*(ptr1+i));

}
free(ptr1);
}