#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c, average;
    printf("Enter three numbers\n");
    scanf("%f%f%f", &a, &b, &c);
    average = a + b + c / 3;
    printf("Average = %0.2f\n", average);
    return 0;
}
