WAP to print the following pattern for n rows. Ex. for n=5 rows
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5

HA4.1 WAP to check whether an input integer is strong number or not.
(Hint: If the sum of factorials of all digits of a number are equal to the number are equal to
the number, it is called a strong number )
#include<stdio.h>
int main()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    originalNum = num;
    sum = 0;
    while(num > 0)
    {
        lastDigit = num % 10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }
    return 0;
}
