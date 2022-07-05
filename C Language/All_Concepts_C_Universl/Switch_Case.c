#include <stdio.h>
int area(int);
int main()
{
    int choice;
    printf("Enter choice : ");
    scanf("%d", &choice);
    int ar = area(choice);
    printf("ar = %d\n", ar);
}
int area(int choice)
{
    // var param = {"asda" : 123};
    int area, length, breadth, base, height, radius, side;

    printf("1. Area of triangle\n2. Area of Rectangle\n3. Area of Circle\n4 Area of Square\n");

    switch (choice)
    {
    case 1:
        printf("Enter Base and Height : ");
        scanf("%d%d", &base, &height);
        area = 0.5 * (base * height);
        // printf("area = %d\n", area);
        break;

    case 2:
        printf("Enter Length and Breadth : ");
        scanf("%d%d", &length, &breadth);
        area = length * breadth;
        // printf("area = %d\n", area);
        break;

    case 3:
        printf("Enter Radius : ");
        scanf("%d", &radius);
        area = 3.14 * radius * radius;
        // printf("area = %d\n", area);
        break;

    case 4:
        printf("Enter Side : ");
        scanf("%d", &side);
        area = side * side;
        // printf("area = %d\n", area);
        break;

    default:
        printf("Invalid input\n");
    }
    return area;
}
