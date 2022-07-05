#include<stdio.h>
int main()
{
    char i[11]="helloindia";
    char n[10]={'h','i','e','d'};
    char m[2][5]={{'h','i','e','d','\0'},{'5','d','g','e','\0'}};
    char n1[15]={'h','i',' ','d'};
    printf("string =%s\n",i);
    printf("string =%s\n",n);
    printf("string =%s\n",n1);
    printf("string =%c\n",n1[1]);
    // printf("string =%d\n",sizeof(n));
    printf("string =%s\n",m[2]);
    printf("string =%s\n",m[1]);
}