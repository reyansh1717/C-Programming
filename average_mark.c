WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full
mark of each subject is 100.

#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total,average,percentage;
    printf("Enter the marks of 5 subjects of a student:\n");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    average=total/5;
    percentage=(total*100)/500;
    printf("Total marks of student is %d\n",total);
    printf("Average marks of student is %d\n",average);
    printf("Percentage of student is %d\n",percentage);
    return 0;
}
