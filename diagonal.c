WAP to find out the sum of the diagonal elements of a matrix.

#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("Enter number of rows of matrix : ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter value of matrix : \n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Given matrix : \n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            {
            sum = sum +arr[i][j];
            }
        }
    }
    printf("The sum of diagonal elements of the matrix is %d",sum);
    return 0;
}
