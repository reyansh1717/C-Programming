WAP to print the following pattern for n rows. Ex. for n=5 rows
A
B A
C B A
D C B A
E D C B A

#include<stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = i; j >= 1; j--) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}
