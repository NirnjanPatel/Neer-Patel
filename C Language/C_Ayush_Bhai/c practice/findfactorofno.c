#include<stdio.h>
int main(){
    int i ,num;
    printf("enter any no to find factor\n");
    scanf("%d",&num);
    printf("factor of a given no are as follows\n");
    for ( i = 1; i <=num; i++)
    {
       if (num%i==0)
       {
           
           printf("%d\t",i);
       }
       
    }
    
}