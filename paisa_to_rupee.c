WAP to convert given paisa into its equivalent rupee and paisa as per the following format.
Example. 550 paisa = 5 Rupee and 50 paisa
#include<stdio.h>
int main()
{
    int input, Rupee,paisa;
    printf("Enter Amount: ");
    scanf("%d",&input);
    Rupee = input/100;
    paisa = input%100;
    printf("Your Amount: %d Rupee and %d paisa\n",Rupee,paisa);
    return 0;
}
