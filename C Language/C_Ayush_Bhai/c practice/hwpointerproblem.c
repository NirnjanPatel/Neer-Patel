#include<stdio.h>
int main()
{
    int a[]={10,11,58,56,50,5,4};
    int *p,*q;
    p=a;
    q=&a[2];
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
      printf("%d\n",(*p)++);
      printf("%d\n",*p);
      q--;
      printf("%d\n",*q);
      printf("%d\n",(*(q+2))--);
      printf("%d",*q);
    
    

}