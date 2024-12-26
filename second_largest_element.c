WAP to find out the second largest element stored in an array of 20 integers.
#include<stdio.h>
int main()
{
    int temp,a,max;
    int arr[20];
    printf("Enter values for the array\n");
    for (int i=1;i<=20;i++)
    {
        scanf("%d",&arr[i-1]);
    }
    for (int i=0;i<20;i++)
    {
        a=0;
        max=arr[0];
        for( int j=0;j<20-i;j++)
        {
            if (arr[j]>max)
            {
                max = arr[j];
                a=j;
            }
        }
        arr[a]=arr[20-i-1];
        arr[20-i-1]=max;
    }
    printf("Second largest element of the array is %d ",arr[18]);
    return 0;
}
