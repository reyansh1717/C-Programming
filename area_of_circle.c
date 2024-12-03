WAP to calculate area of a circle.

#include<stdio.h>
int main()
{
    float Pi = 22/7, Radius,Area;
    printf("Enter Radius of Circle: ");
    scanf("%f",&Radius);
    Area = Pi * Radius * Radius;
    printf("Area of circle: %f\n",Area);
    return 0;
}
