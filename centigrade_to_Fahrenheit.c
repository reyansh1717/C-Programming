WAP to convert temperature from centigrade to Fahrenheit scale.

#include<stdio.h>
int main()
{
    float Celsius, Fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit = (9.0/5.0) * Celsius + 32;
    printf("%f Celsius is %f Fahrenheit\n", Celsius, Fahrenheit);
    return 0;
}
