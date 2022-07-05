// Currency Programme
#include<stdio.h>
int main()
{
int n,tt,fh,th,oh,ft,tw,ten,five,two,one;    
    printf("Enter Amount\n");
    scanf("%d",&n);
    n=84365;
    tt=n/2000;
    fh=n%2000/500;
    th=n%2000%500/200;
    oh=n%2000%500%200/100;
    ft=n%2000%500%200%100/50;
    tw=n%2000%500%200%100%50/20;
    ten=n%2000%500%200%100%50%20/10;
    five=n%2000%500%200%100%50%20%10/5;
    two=n%2000%500%200%100%50%20%10%5/2;
    one=n%2000%500%200%100%50%20%10%5%2/1;
    printf("Note of 2000 = %d\n",tt);
    printf("Note of 500 = %d\n",fh);
    printf("Note of 200 = %d\n",th);
    printf("Note of 100 = %d\n",oh);
    printf("Note of 50 = %d\n",ft);
    printf("Note of 20 = %d\n",tw);
    printf("Note of 10 = %d \n",ten);
    printf("Note of 5 = %d\n",five);
    printf("Note of 2 = %d\n",two);
    printf("Note of 1 = %d\n",one);
    return 0;
}