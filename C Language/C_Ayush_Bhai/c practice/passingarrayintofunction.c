#include<stdio.h>
void fun(int []);
void main()
{
    int a[5]={25,65,89,96,66};
    fun(a);

}
void fun(int a[5])
{
    int i;
    for ( i = 0; i<5; i++)
    {
        // sum=sum+a[i];
        printf("\n a[%d] =%d",i,a[i]);
    }
        printf("\n %d",sum);
    

}