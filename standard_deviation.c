WAP to find the standard deviation of a list of numbers.

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sum=0,mean,deviation;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter value of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    mean=sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=pow((arr[i]-mean),2);
    }
    deviation= sqrt(sum/n);
    printf("The standard deviation of the given array is %f",deviation);
    return 0;
}
