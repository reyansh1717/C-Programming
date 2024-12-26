WAP to swap first element with last, second element with second last and so on, stored in an
array.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter number of elements of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values for the array\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n/2;i++)
    {
        temp = arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
        
    }
    printf("Array after swapping : ");
    for (int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
