#include<stdio.h>
struct mail{
    char n[20];
    char m[30];
};
int main()
{
    struct mail e[3];
    int i;
    for ( i = 0; i < 3; i++) 
    {
        printf("enter name of a person\n");
       getchar();
        gets(e[i].n);
        printf("enter e-mail id  of a person\n");
        gets(e[i].m);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("email-id of a person is =%s",e[i].n);
        printf("email-id of a person is =%s",e[i].m);
    }
    
    


}