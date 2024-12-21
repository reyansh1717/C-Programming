WAP to find out the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter number of rows of matrix : ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix : ");
    scanf("%d",&n);
    int mat[m][n];
    int  trans[n][m];
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
    printf("The transpose of the given matrix is:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
