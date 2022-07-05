#include<stdio.h>
int main()
{
    int a,b,sum,mul,sub,div ;
    char operator;
    printf("enter the value of operator\n");
    scanf("%c",&operator);
    printf("enter the  two value of operand\n");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
        case '+':
        sum=a+b;
        printf("value of sum is =%d",sum);
        // break;
        case '*':
        mul=a*b;
        printf("value of mul is =%d",mul);
        // break;
        case '-':
        sub=a-b;
        printf("value of sub is =%d",sub);
        // break;
        case '/':
        div=a+b;
        printf("value of div is =%d",div);
        break;
        default:
        printf(" enter valid operator\n");



    }
}
