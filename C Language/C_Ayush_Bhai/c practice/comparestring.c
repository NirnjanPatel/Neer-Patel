#include<stdio.h>
int main()
{
    char n1[15],n2[15];
    int flag=0,i;
    printf("enter first array\n");
    gets(n1);
    printf("enter second array\n");
    gets(n2);

    for ( i = 0; n1[i]!='\0' ;i++)
    {
        if(n1[i]!=n2[i])
        {
            flag=1;
            break;
        }
    }
    
        if (flag==0)
        printf("string is same\n");
        else
        printf("string is not same\n");
       
    
}
