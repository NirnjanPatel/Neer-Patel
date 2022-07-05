#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i;
    char s1[30]="jenny";
    char s2[]="kahtri";

    strncat(s1,s2,2);


    // strcat(s1,s2);
    // printf("string after concatination\n");
    // printf("%s\n",s1);
    // puts(s2);





    // l1=strlen(s1);
    // l2=strlen(s2);


    // for ( i = 0; i <=l2; i++)
    // {
    //     s1[l1+i]=s2[i];
    // }
        printf("%s",s1);

}