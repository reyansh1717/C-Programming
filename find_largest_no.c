WAP to find the largest between two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("\nLargest number is %d",a);
    else
    printf("\nLargest number is %d",b);
    return 0;
}
