#include<stdio.h>
int main()
{
    char n1[15],n2[20];
    int i,flag=0;
    printf("enter name\n");
    gets(n1);
    printf("enter another  name\n");
    gets(n2);

    for ( i = 0; n1[i]!='\0'; i++)
    {
       if (n1[i]!=n2[i])
       {
    flag=1;
    break;
       }
    }
       if (flag==1)
       {
           printf("string is not same\n");

       }
       else
       printf("string is same\n");
       
    


}