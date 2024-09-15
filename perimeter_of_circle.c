WAP to calculate perimeter of a circle.
#include<stdio.h>
int main()
{
    float radius, perimeter, PI=3.14;
    printf("Enter radius of a circle: ");
    scanf("%f", &radius);
    perimeter = 2 * PI * radius;
    printf("Perimeter of a circle: %.2f\n", perimeter);
    return 0;
}
