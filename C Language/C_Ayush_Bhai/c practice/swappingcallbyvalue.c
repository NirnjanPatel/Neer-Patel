#include<stdio.h>
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("enter value of a and b %d,%d\n",a,b);
}
int main()
{
    int x, y;
    printf("enter value of a and b \n");
    scanf("%d%d",&x,&y);
    swap(x,y);
    printf("value of a and b are =%d ,%d",x,y);

}