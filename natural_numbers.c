WAP to print the natural numbers from 1 to 20.
#include<stdio.h>
int main()
{
    int i;
    printf("\nThe natural number's are: ");
    for(i=1;i<=20;i++)
    printf("%d ",i);
    return 0;
}
SA4.2 WAP to print all numbers within a given range. The range is given by user.
#include<stdio.h>
int main()
{
    int min,max,i;
    printf("\nEnter minimum and maximum range:");
    scanf("%d%d",&min,&max);
    printf("\nThe number's are::\n");
    for(i=min;i<=max;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}
