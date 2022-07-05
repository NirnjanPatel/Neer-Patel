// Print area as users choice
#include <stdio.h>
int main()
{
    float l, r, b, w, h, s, ba, area;
    int choice;
    printf("1. Area of triangle\n2. Area of rectangle\n3. Area of square\n4. Area of circle\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:

        printf("Enter value of breaght and height : ");
        scanf("%f%f", &b, &h);
        area = 0.5 * b * h;
        printf("Area of triangle = %d\n", (int)area);
        break;
    case 2:

        printf("Enter value of lenght and Breaght : ");
        scanf("%f%f", &l, &b);
        area = l * b;
        printf("Area of rectangle = %-12.2f space\n", area);
        break;
    case 3:

        printf("Enter value of side : ");
        scanf("%f", &s);
        area = s * s;
        printf("Area of square = %0.2f\n", area);
        break;
    case 4:

        printf("Enter value of radious : ");
        scanf("%f", &r);
        area = 3.14 * r * r;
        printf("Area of triangle = %0.2f\n", area);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}