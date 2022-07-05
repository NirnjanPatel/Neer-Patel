#include<stdio.h>
#include<string.h>
int main()
{
    // char s1[30]="jennykahtri";
    // strrev(s1);
    // printf("%s\n",s1);



 int l,j ,i;
   char s1[30],c;
   printf("enter string\n");
   gets(s1);
   
   l=strlen(s1);
//    for ( i = 0; i < l/2; i++)
//    {
//        c=s1[i];
//        s1[i]=s1[l-i-1];
//        s1[l-i-1]=c;

//    }



for ( i = 0,j=l-1; i < j; i++,j--)
{
   
 c=s1[i];
 s1[i]=s1[j];
 s1[j]=c;

}   
   printf("%s",s1);



}
