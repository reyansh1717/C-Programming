WAP to determine whether a year entered through the keyboard is a leap year or not.

#include<stdio.h>
void leap(int year);
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leap(year);
}
void leap(int year)
{
        if(year%400==0)
        {
            printf("%d is a leap year.",year);
        }
        else if(year%100==0)
        {
            printf("%d is not a leap year.", year);
        }
        else if(year%4==0)
        {
            printf("%d is a leap year.", year);
        }
        else
        {
            printf("%d is not a leap year.", year);
        }
}
