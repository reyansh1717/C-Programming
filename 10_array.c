WAP to input 10 integers into an array of size 10. Print all elements.

#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter values for the array:");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
