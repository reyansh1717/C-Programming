WAP to print the following pattern for n rows. Ex. for n=5 rows
    
A
A B
A B C
A B C D
A B C D E
#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}
