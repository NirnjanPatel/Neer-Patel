#include<stdio.h>
int main()
{
    int n ,t,p,q,r,s,u,v,w,t1;
    printf("enter the value of money\n");
    scanf("%d",&n);
    t=n/1000;
    p=n%1000/500;
    q=n%1000%500/100;
    r=n%1000%500%100/50;
    s=n%1000%500%100%50/20;
    t1=n%1000%500%100%50%20/10;
    u=n%1000%500%100%50%20%10/5;
    v=n%1000%500%100%50%20%10%5/2;
    w==n%1000%500%100%50%20%10%5%2/1;
  printf("no of 1000rs is %dnotes\n ",t);
  printf("no of 500rs is %d notes\n ",p);
  printf("no of 100rsis %d notes\n ",q);
  printf("no of 50rs is %dnotes\n ",r);
  printf("no of 20rs is %dnotes\n ",s);
  printf("no of 10rs is %dnotes\n ",t1);
  printf("no of 5rs is %dnotes\n ",u);
  printf("no of 2rs is %d notes\n ",v);
  printf("no of 1rs is %d notes\n ",w);
}