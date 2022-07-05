// Arithmatic Assignment Oerators (+= -= %= *= /=)
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter Three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    a+=5;
    printf("a = %d\n",a);
    c-=18;
    printf("c = %d\n",c);
    b*=c;
    printf("b = %d\n",b);
    return 0;
}
