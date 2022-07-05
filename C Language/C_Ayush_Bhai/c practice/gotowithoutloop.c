#include<stdio.h>
int main()
{
    int i=1;
    printf("pls print no\n");
    a:
    {
     i=i+1;    
    }
    if (i<100)
    {
      printf("%d\n",i);
        goto a;
        // printf("%d",i);
            
    }

}