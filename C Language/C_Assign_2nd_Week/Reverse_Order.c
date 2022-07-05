#include <stdio.h>
void main()
{
    int arr[50], i, size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    printf("Enter Array Elements : \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements are: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("Array Elements in reverse are: \n");

    for (i = size - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}