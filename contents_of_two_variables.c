WAP swap the contents of two variables by using a single statement for swap in C.
    
#include<stdio.h>
int main()
{
    int x = 1, y = 2;
    (x ^= y), (y ^= x), (x ^= y);
    printf("a = %d, b = %d\n", x, y);
    return 0;
}
