#include<stdio.h>


   void  starpattern(int a){
    for(int i=0;i<5;i++)
    {
        for(int j=5;j>i;j--){
        printf("*");
        

    }
    printf("\n");
    }}
int main()
{
    int b;
    printf("enter the no of rows\n");
    // scanf("%d",&b);
    starpattern(b);

}