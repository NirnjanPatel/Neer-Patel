// Celsius_to_Fehrenheit
#include <stdio.h>
void main()
{
    float cels, fehr;
    printf("Enter Temperator in Celcius : ");
    scanf("%f", &cels);

    fehr = (cels*9/5) + 32;
    

    printf("Fehrenheit = %.2f", fehr);
}