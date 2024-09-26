WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is
in lowercase, otherwise display an appropriate message.
#include <stdio.h>
#include <ctype.h>
int main()
{
  char Ch;
  printf("Enter any alphabet\n");
  scanf(" %c", &Ch);
  if (isalpha(Ch) )
   {  
     Ch = toupper(Ch); 
     printf ("Uppercase of Entered character is %c", Ch);
   }
  else
   {
     printf("Enter Valid Alphabet");
   }
   return 0;
}
