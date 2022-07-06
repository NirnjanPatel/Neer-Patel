#include <stdio.h>
int main()
{
    int a=1;
    printf("%d\n",a);
    do 
    {
         a=a+1;    
         printf("%d\n",a);
    } while (a<10);
    
    return 0;
}