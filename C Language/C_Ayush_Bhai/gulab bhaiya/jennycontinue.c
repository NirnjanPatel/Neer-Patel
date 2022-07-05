#include<stdio.h>
int main()
    {
        int i ,a , sum=0;
        for ( i = 0; i<=5; i++)
        {
            printf("enter a integer \n");
            scanf("%d",&a);
            if (a<0)
            {
                continue;

            }
            sum=sum+a;

        }
        printf("sum=:%d",sum);

        }
        


    
