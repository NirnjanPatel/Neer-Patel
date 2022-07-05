#include<stdio.h>
#include<string.h>
 int main()
 {
     char a[50];
     printf("enter the value of string in upper case\n");
     gets(a);
     for ( int i = 0; a[i]!='\0'; i++)
     {
         if (a[i]>=65&&a[i]<=90)
         {
            a[i]=a[i]+32;
         }
     }
         printf("%s",a);
     
 }                                               
               
                         
                                 


                                  