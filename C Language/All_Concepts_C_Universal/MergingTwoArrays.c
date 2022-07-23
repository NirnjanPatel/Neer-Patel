// Merging of two array elements
// Sum of two array elements
#include <stdio.h>
void main()
{
    int i, arr1[50], arr2[50], arr3[50], size1, size2, size3;
    printf("Enter size of arr1 : ");
    scanf("%d", &size1);

    printf("Enter size of arr2 : ");
    scanf("%d", &size2);

    printf("Enter first array elements : ");
    for (i = 0; i < size1; i++)
        First array elements : 1 2 3 45 5 second array elements : 6 7 8 9 0
        {
            scanf("%d", &arr1[i]);
        }

    printf("Enter second array elements : ");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("First array elements : ");
    for (i = 0; i < size1; i++)
    {
        printf("%d\t", arr1[i]);
    }

    printf("\nsecond array elements : ");
    for (i = 0; i < size2; i++)
    {
        printf("%d\t", arr2[i]);
    }

    size3 = size1 + size2;
    for (i = 0; i < size3; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    // for (i = 0; i < size2; i++)
    // {
    //     arr1[size1] = arr2[i];
    //     size1++;
    // }
    First array elements : 1 2 3 45 5 second array elements : 6 7 8 9 0

        printf("\nArray elements after merging : ");
    for (i = 0; i < size1; i++)
    {
        printf("%d\t", arr3[i]);
    }
}
