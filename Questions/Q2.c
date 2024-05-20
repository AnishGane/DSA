#include <stdio.h>
#include <math.h>
#include<string.h>
#define pie 3.14

// Q. Find the area of different shapes using function having function name area().
// different shapes include circle, square and of rectangle.

int area(char shapeformat[]);
int main()
{
    char shape[100];
    printf("Enter name of shape to calculate area of that shape:");
    scanf("%s", &shape);
    area(shape);
    return 0;
}
int area(char shapeformat[])
{

    if ( strcmp(shapeformat,"circle") == 0)
    {
        float r;
        printf("Enter value of radius(r) of circle:");
        scanf("%f", &r);
        float areaofcircle = pie * pow(r, 2);
        printf("Area of circle is : %.2f sq. unit", areaofcircle);
    }
    else if ( strcmp(shapeformat,"square") == 0)
    {
        float l;
        printf("\nEnter length of square:");
        scanf("%f", &l);
        float areaofsquare = l * l;
        printf("Area of Square having length(l) %.2f is: %.2f sq. unit", l, areaofsquare);
    }
    else if ( strcmp(shapeformat,"rectangle") == 0)
    {
        float l, b;
        printf("Enter value of length of rectangle: ");
        scanf("%f", &l);
        printf("Enter value of breadth of rectangle: ");
        scanf("%f", &b);
        float areaofrectangle = l * b;
        printf("Area of rectangle having length %.2f and breadth %.2f is: %.2f sq. unit", l, b, areaofrectangle);
    }
    else
    {
        printf("Enter valid input in value.");
    }
}
