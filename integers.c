WAP to input any two integers distinct and display the greater of two integers.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Two different values\n");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is greater\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is greater\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}
