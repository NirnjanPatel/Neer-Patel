#include<stdio.h>
int main()
{
    int i=1,j=3;
    do
    {
        do
        {
            printf("%d",j);
            j--;
        } while (j>0);
        i++;
        printf("%d",i);
        
    } while (i<4);
    

}