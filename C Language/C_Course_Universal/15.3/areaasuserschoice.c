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
        area = b * h;
        printf("Enter value of breaght and height : ");
        scanf("%f%f", &b, &h);
        printf("Area of triangle = %0.2f\n", area);
        break;
    case 2:
        area = l * b;
        printf("Enter value of lenght and Breaght : ");
        scanf("%f%f", &l, &b);
        printf("Area of rectangle = %0.2f\n", area);
        break;
    case 3:
        area = s * s;
        printf("Enter value of side : ");
        scanf("%f", &s);
        printf("Area of square = %0.2f\n", area);
        break;
    case 4:
        area = 3.14 * r * r;
        printf("Enter value of radious : ");
        scanf("%f", &r);
        printf("Area of triangle = %0.2f\n", area);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}
