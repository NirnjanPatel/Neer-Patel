#include <stdio.h>
int main()
{
    int marks[5];
    int i;
    int sum = 0;
    float average;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Continuous Format = %d\n", marks[i]);
        
    }


    return 0;
}
