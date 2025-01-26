 WAP to check whether a given matrix is orthogonal or not.
#include<stdio.h>
int main()
{
    int m,n,count=0;
    printf("Enter number of rows of matrix : ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix : ");
    scanf("%d",&n);
    int mat[m][n];
    int trans[n][m];
    int identity[m][n];
    printf("\nEnter value of matrix\n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            trans[i][j]=mat[j][i];
        }
    }
    if(m==n)
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<m;j++)
            {
                identity[i][j]=0;
                for (int k=0;k<n;k++)
                {
                    identity[i][j]+=mat[i][k]*trans[k][j];
                }
            }
        }
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<m;j++)
            {
                if(i==j && identity[i][j]!=1)
                {
                    count+=1;
                }
                if (i!=j&&identity[i][j]!=0)
                {
                    count+=1;
                }
            }
        }
        if (count>0)
        {
            printf("The given matrix is not orthogonal");
        }
        else
        {
            printf("The given matrix is orthogonal");
        }
    }
    else
    {
        printf("The given matrix is not orthogonal");
    }
return 0;
}
