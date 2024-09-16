WAP to find centigrade for a given Fahrenheit temperature.

#include<stdio.h>
int main()
{
    int C,F;
    printf("Enter Temp in Fahrenheit: ");
    scanf("%d",&F);
    C = (F-32)*5/9;
    printf("Temp in Centigrade: %d\n",C);
    return 0;
}
