WAP which takes two integer operands and one operator form the user, performs the
operation and then prints the result. (Consider the operators +,-,*, /, % etc). Use switch case.
#include<stdio.h>
int main()
{
    char ch;
    int num1,num2;
    printf("Choose the operator(+,-,*,/,%%): ");
    scanf("%c",&ch);
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    switch(ch)
    {
        case '+':
        printf("%d + %d =%d\n",num1,num2,num1+num2);
        break;
        case '-':
        printf("%d - %d =%d\n",num1,num2,num1-num2);
        break;
        case '*':
        printf("%d * %d =%d\n",num1,num2,num1*num2);
        break;
        case '/':
        printf("%d / %d =%d\n",num1,num2,num1/num2);
        break;
        case '%':
        printf("%d %% %d =%d\n",num1,num2,num1%num2);
        break;
        default:
        printf("you have put the wrong ");
    }
    return 0;
}
