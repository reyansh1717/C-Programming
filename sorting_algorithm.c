WAP to sort 3 elements stored in an array without using any sorting algorithm.

#include<stdio.h>
int main()
{
    int temp;
    int arr[3];
    printf("Enter the value of array\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>=arr[1])
    {
        temp=arr[0];
        arr[0]=arr[1];
        arr[1]=temp;
        if(arr[0]>=arr[2])
        {
            temp=arr[0];
            arr[0]=arr[2];
            arr[2]=temp;
        }
        if(arr[1]>=arr[2])
        {
            temp=arr[1];
            arr[1]=arr[2];
            arr[2]=temp;
        }
    }
    else
    {
        if(arr[0]>=arr[2])
        {
            temp=arr[0];
            arr[0]=arr[2];
            arr[2]=temp;
        }
        if(arr[1]>=arr[2])
        {
            temp=arr[1];
            arr[1]=arr[2];
            arr[2]=temp;
        }
    }
    printf("The sorted array is : ");
    for(int i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
