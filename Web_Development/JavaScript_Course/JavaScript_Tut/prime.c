#include<stdio.h>
void main()
{
    int no, count=0, i, j;
    printf("Enter a number : ");
    scanf("%d",&no);
    for (i = 1; i <= no;i++)
    {
        count = 0;
        for (j = 1; j <= i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
{
    printf("%d\t", i);
}
    }

}