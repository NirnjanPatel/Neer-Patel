#include <stdio.h>
void main()
{
    int i, j, rows, k;
    printf("Enter Row : ");
    scanf("%d", &rows);

    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= rows; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = rows; j >= i; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= rows; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// for (i = 1; i <= rows; i++)
// {
//     for (j = i; j < rows; j++)
//     {
//         printf(" ");
//     }
//     for (k = 1; k <= i; k++)
//     {
//         printf("* ");
//     }
//     printf("\n");
//     }
// }
