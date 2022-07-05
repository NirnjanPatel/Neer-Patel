#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fer, cels;
    printf("Enter Temprature in Fer\n");
    scanf("%d", &fer);
    cels = (fer - 3) * 5 / 9;
    printf("Temprature in Fer to cels = %d\n", cels);
    return 0;
}
