WAP to read an alphabet from the user and convert it into lowercase if the entered
alphabet is in uppercase, otherwise display an appropriate message.

#include<conio.h>
#include<stdio.h>
int main()
{
    char upperChar, lowerChar;
    int ascii;
    printf("Enter an uppercase Character: ");
    scanf("%c", &upperChar);
    ascii = upperChar;
    lowerChar = ascii+32;
    printf("\nIts Lowercase = %c", lowerChar);
    getch();
    return 0;
}
