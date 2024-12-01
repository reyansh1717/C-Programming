 WAP to find out the largest even integer stored in the array of n integers. n is the user input.
#include<stdio.h>
int main()
{
    int n,max;
    printf("Enter number of elements of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values for the array\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            max = arr[i];
        }
        break;
    }
    for (int i=0;i<n;i++)
    {
         if (arr[i]%2==0&&arr[i]>max)
         {
             max = arr[i];
        }
    }
    printf("Largest even integer in the array is %d",max);
    return 0;
}

