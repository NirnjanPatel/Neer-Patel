#include <stdio.h>
int main()
{
    float cels, fer;
    printf("Enter temprature\n");
    scanf("%f", &cels);
    fer = (9 / 5) * cels + 32;
    printf("Temp to Fer = %0.2f\n", fer);
    return 0;
}
