#include <stdio.h>
int main()
{
    int n, age;
    char co;
    printf("enter the value of \n");
    scanf("%c", &co);
    if (co == 'i' || co =='I')
    {
        printf("\n enter age");
        scanf("%d", &age);
        if (age >= 18)

        {
         printf("\n yes you can vote");
        }
         else 
         
         printf("\nyou cant vote\n");
    }
        else
        
        printf("\n sorry not for other country ");
    
    
    
}