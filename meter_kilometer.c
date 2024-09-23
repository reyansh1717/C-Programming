WAP to convert a quantity in meter entered through keyboard into its equivalent kilometer and
meter as per the following format. Example. 2430 meter = 2 Km and 430 meter.
#include<stdio.h>
int main()
{
    int inM, k,m;
    printf("Enter Length in m: ");
    scanf("%d", &inM);
    m = inM%1000;
    k = inM/1000;
    printf("Length in Km: %dkm %dm\n", k, m);
    return 0;
}
