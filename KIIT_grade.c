WAP to display the grade system of KIIT University based on total marks secured by a
student in a semester. Use else..if ladder statement.

    
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter total maks secured by a student\n");
    scanf("%d", &marks);
    if(marks >= 90)
    {
        printf("GRADE : O");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("GRADE : E");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("GRADE : A");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("GRADE : B");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("GRADE : C");
    }
    else if (marks >= 40 && marks < 50)
    {
        printf("GRADE : D");
    }
    else
    {
        printf("YOUR GRADE : Fail\n");
    }
    return(0);
}
