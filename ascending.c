WAP to display the array elements in ascending order.

#include<stdio.h>
void main()
{
    int i, j, a, n, number[30];
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the numbers:");
    for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j])
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
    }
        printf("numbers arranged in ascending order: \n");
        for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}

