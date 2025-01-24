WAP to check whether a given matrix is symmetric or not.
#include<stdio.h>
int main()
{
    int m,n,count=0;
    printf("Enter number of rows of matrix : ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix : ");
    scanf("%d",&n);
    int mat[m][n];
    printf("\nEnter value of matrix\n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    if(m==n)
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if(mat[i][j]!=mat[j][i])
                {
                    count+=1;
                }
            }
        }
        if (count>0)
        {
            printf("The given matrix is not symmetric");
        }
        if (count==0)
        {
            printf("The given matrix is symmetric");
        }
    }
    else
    {
        printf("The given matrix is not symmetric");
    }
return 0;
}
