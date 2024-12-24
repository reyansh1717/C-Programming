WAP to print the series as 3 5 7 11 13 17..........n, where n is given by user.
WAP to print all odd and even numbers separately within a given range. The range is input
through user.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2,r,i;
    printf("Enter the first number for the range: ");
    scanf("%d",&num1);
    printf("Enter the second number for the range: ");
    scanf("%d",&num2);
    printf("\nDisplaying even numbers between %d and %d are: ",num1,num2);
    for(i=num1; i<=num2; i++)
    {
        r=i%2;
        if(r==0)
            printf("\n %d",i);
    }
    printf("\n\nDisplaying odd numbers between %d and %d are: ",num1,num2);
    for(i=num1; i<=num2; i++){
        r=i%2;
        if(r==1)
            printf("\n %d",i);
    }
    return 0;
}
