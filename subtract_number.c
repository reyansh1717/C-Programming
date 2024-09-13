WAP to subtract a number from another number and display the result.
#include<stdio.h>
int main()
{
   int num1,num2;
    printf("Enter 1st numbers: ");
    scanf("%d",&num1);
    printf("Enter 2nd numbers: ");
    scanf("%d",&num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    return 0;
}
