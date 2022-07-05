#include<stdio.h>
int main()
{
    int a=3;
    int *ptr1=0;
    // null pointer will always have zero ie NULL
    int *ptr2=0;
    // ptr1=&a;
    if (ptr1==ptr2)
    {
       printf("this equal\n");
    }
    else
    
{
    printf("%d\n",*ptr1);
}
 printf("%d\n",ptr2);
}