#include<stdio.h>
int  main()
{
    int num,i ;
    printf("enter a no\n");
    scanf("%d",&num);
    for ( i = 1; i<=10; i++)
    {
       printf("table of  is %dX%d=%d\n",num,i,num*i);
    }
    

}

