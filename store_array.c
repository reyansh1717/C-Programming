WAP to store max. 100 numbers into an array. Print all the elements that are three digit even
integers.
#include<stdio.h>
int main()
{
    int n;
    int arr[100];
    printf("Enter number of elements of array : ");
    scanf("%d",&n);
    printf("Enter values for the array\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Even three digit numbers in the array are : ");
    for (int i=0;i<n;i++)
    {
        if(arr[i]>99&&arr[i]<1000&&arr[i]%2==0)
        {
            printf("%d  ",arr[i]);
        }
        
    }
    return 0;
}
