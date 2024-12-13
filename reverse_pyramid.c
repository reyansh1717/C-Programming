WAP to form reverse pyramid of numbers for a given number. Ex. for number 4
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1

#include <stdio.h>
int main()
{
    int i,j,rows,space=0;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);//taking numer of rows from user
    for(i=rows; i>=1; i--)
    {  
        for(j=1; j<=space; j++)//print space at the begining
        printf(" ");
         for(j=1; j<=i; j++)//print right side of pyramid
        printf("%d", j);
         for(j=i-1; j>=1; j--)//print right side of pyramid
        printf("%d", j);
        printf("\n");
        space++;
    }
    return 0;
}
