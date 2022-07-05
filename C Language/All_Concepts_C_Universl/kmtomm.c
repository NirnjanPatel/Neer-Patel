// Programme to convert KM to MM
#include <stdint-gcc.h>
int main(int argc, char const *argv[])
{
    double km, m, cm, mm;
    printf("Enter range of KM\n");
    scanf("%lf", &km);
    m = km * 1000;
    cm = m * 1000;
    mm = cm * 1000;
    printf("KM to MM = %0.2lf\n", mm);
    return 0;
}
