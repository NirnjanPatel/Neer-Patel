#include <stdio.h>
int main()
{
    int n, m, num, i;
    printf("enter the value of n and m :");
    scanf("%d%d", &n, &m);
    for (num = n; num<= m; num++) // 1<=1000   2<=1000
    {
        for (i = 2; i <= num / 2; i++) // i=2   2<=0     2<1   
        {
            if (num % i == 0)    //1/2==0     
                break;
        }
        if (i > num / 2 && num > 1)   2>1  1>1  
            printf("%d\t", num);
    }
    return 0;
}