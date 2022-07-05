#include<stdio.h>
int main()
{
    int i,flag=0,k=0,j;
    char n1[15],n2[15];
    printf("enter name\n");
    gets(n1);
    for ( i = 0; n1[i]!='\0'; i++)
    {
        
    }
    printf(" length of string  is %d\n",i);
      i--;
    for ( j= i; j>=0 ; j--)
    {
         n2[k]=n1[j];
k++;

            }
            n2[k]='\0';
            printf("reverse string is %s\n",n2);
            for ( k = 0; n1[k]!='\0'; k++)
            {
      

            if (n1[k]!=n2[k])
            {
                flag=1;
                break;
            }

            }
            
            if (flag==0)
            
                printf("string is palindrome\n");

                else
                printf(" string is not palindrome\n");
            
            


}