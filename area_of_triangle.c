WAP to calculate area of a triangle whose base and height is given.

#include<stdio.h>
int main()
{
    float Base,Height,Area;
    printf("Enter Base of Triangle: ");
    scanf("%f",&Base);
    printf("Enter Height of Triangle: ");
    scanf("%f",&Height);
    Area = (Base * Height) / 2;
    printf("Area of circle: %f\n",Area);
    return 0;
}
