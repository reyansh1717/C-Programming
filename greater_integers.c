WAP to input any three integers distinct and display the greater of three integers.

#include<stdio.h>
int main()
{
   int num1,num2,num3;
   printf("Enter value of num1, num2 and num3:");
   scanf("%d %d %d",&num1,&num2,&num3);
   if((num1>num2)&&(num1>num3))
      printf("\n Number 1 is greatest");
   else if((num2>num3)&&(num2>num1))
      printf("\n Number 2 is greatest");
   else
      printf("\n Number 3 is greatest");
   return 0;
}
