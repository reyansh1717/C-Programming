WAP to swap two integer numbers using third variable.

#include<stdio.h>
int main()
{
    int A=5,B=10,temp;
    printf("Before Swap\n");
    printf("A : %d\n",A);
    printf("B : %d\n",B);
    temp=A;
    A=B;
    B=temp;
    printf("After Swap\n");
    printf("A : %d\n",A);
    printf("B : %d\n",B);
    return 0;
}
