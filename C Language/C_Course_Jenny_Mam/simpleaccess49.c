// Simple or Compile Time Accessing of array
#include <stdio.h>
int main()
{
    int marks[5] = {12, 234, 45, 3, 2};
    float percentage[5] = {12};
    {
        printf("Marks of five studets = %d\n", marks[0]);
        printf("Marks of five studets = %d\n", marks[1]);
        printf("Marks of five studets = %d\n", marks[2]);
        printf("Marks of five studets = %d\n", marks[3]);
        printf("Marks of five studets = %d\n", marks[4]);

        printf("Percentage of five studets = %0.2f\n  ", percentage[0]);
        printf("Percentage of five studets = %0.2f\n  ", percentage[1]);
        printf("Percentage of five studets = %0.2f\n  ", percentage[2]);
        printf("Percentage of five studets = %0.2f\n  ", percentage[3]);
        printf("Percentage of five studets = %0.2f\n  ", percentage[4]);
    }
    return 0;
}