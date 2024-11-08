WAP to find out the sum of the numbers stored in an array of integers.
#include<stdio.h>
int main()
{
    //let's assume the maximum array size as 100.
    //initialize sum as 0. Otherwise, it will take some other value.
    int arr[100], size, i, sum = 0;
    
    //Getting size input from user
    printf("Enter array size\n");
    scanf("%d",&size);
    
    //Get all elements using for loop and store it in array
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    //adding all elements
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; // same as sum += arr[i];
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}
