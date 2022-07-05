#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a no \n");
    scanf("%d",&n);

    for ( i =1; i <=n; i++)     //1<=5   2<=5    3<=5
    {
        if (i%2==0)     //2%2==0          
        { 
            for ( j = 1; j <=i; j++)      //1<=2   2<=2
            {
                printf("#");
            }
            
        }
        else
        for ( j = 1; j <=i; j++)    // 1<=1
        {
            printf("*");

        }
        printf("\n");
        
    }
    
}