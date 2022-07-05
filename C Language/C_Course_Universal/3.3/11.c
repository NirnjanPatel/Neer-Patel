// Armstrong or not
#include<stdio.h>
void main()
{
    int no, r, sum = 0,temp;
    printf("Enter a no. : ");
    scanf("%d", &no);
    temp = no;
    while (no > 0)

    {
        r = no % 10;
        sum = sum + (r * r * r);
        no = no / 10;

    }
    if (temp == sum)
    {
        printf("No. is armstrong\n");
    }
    else
    {
        printf("No. not is armstrong\n");
    }

}