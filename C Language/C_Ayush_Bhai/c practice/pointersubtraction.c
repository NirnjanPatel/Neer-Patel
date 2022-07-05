#include<stdio.h>
int main()
{
    int i;
    int a[5]={0,-1,-2,5,8};
    int *p=a;
    int *q=&a[3];
    printf("%d\n",*q);
    // printf("q-p=%d\n",q-p);
    // printf("p-q=%d\n",p-q);
    //  printf("value:==%d\n",*q);
      q=q-2;
      printf("value:==%d\n",*q);
// p=p+2;
// printf("q-p=%d\n",q-p);
// q=q-2;
// printf("%d",*q); 
for ( i = 0; i <5; i++)
{
    printf("%d  ",a[i]);
}

}