WAP to find the median of a list of numbers.
    
#include<stdio.h>
int main()
{
    int n,temp,a,max;
    printf("Enter number of elements of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values for the array\n");
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i-1]);
    }
    for (int i=0;i<n;i++)
    {
        a=0;
        max=arr[0];
        for( int j=0;j<n-i;j++)
        {
            if (arr[j]>max)
            {
                max = arr[j];
                a=j;
            }
        }
        arr[a]=arr[n-i-1];
        arr[n-i-1]=max;
    }
    if(n%2!=0)
    {
        printf("Median = %d",arr[n/2]);
        
    }
    else
    {
        printf("Median = %d",(arr[(n-1)/2]+arr[(n+1)/2])/2);
    }
    return 0;
}
