WAP to convert given second into its equivalent hour, minute and second as per the following
format. Example. 7560 second = 2 Hour, 27 Minute and 40 Second

#include<stdio.h>
int main()
{
    int hour,minute,second,input;
    printf("Enter Time in sec: ");
    scanf("%d",&second);
    hour= (second/3600);
    minute=(second-(3600*hour))/60;
    second=(second-(3600*hour)-(minute*60));
    printf("Time: %d Hour, %d Minute and %d Second\n",hour,minute,second);
    return 0;
}
