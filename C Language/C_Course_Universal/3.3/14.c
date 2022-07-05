// Area of square , circle & rectangle
#include<stdio.h>
void main()
{
    int choice,area,side,radious,length,breadth;
    printf("1. area of square \n2. area of circle \n3. area of rectangle \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1 :
     printf("Enter Side :  ");
     scanf("%d",&side);
     area = side * side;
     printf("Area of Square = %d", area);
     break;

    case 2 :
     printf("Enter Radious : ");
     scanf("%d",&radious);
     area = 3.14 * radious * radious;
     printf("Area of Circle = %d", area);
    break;

case 3:
    printf("Enter Length & Breadth : ");
    scanf("%d%d", &length, &breadth);
    area = length * breadth;
    printf("Area of Rectangle = %d", area);    
    break;

    default:
    printf("Invalid Choice");
}
}

