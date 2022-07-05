#include<stdio.h>
int main()
{
    int bin[32],i=0,n,j;
    printf("enter the no you want a binary form\n");
    scanf("%d",&n);

while (n>0)      //17
{
    bin[i]=n%2;      //bin[0]=17%2=1 ie bin[0]=1
    n=n/2;    //8
    i++;     //1

}
 for ( j =i-1; j >=0; j--)
 {
     printf("%d",bin[j]);

}

}
