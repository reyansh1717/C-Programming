WAP to add two times in hour, minitue & second format entered through the keyboard in the
format hh:mm:ss
#include<stdio.h>
int main()
{
    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    int h3 = h1 + h2;
    int m3 = m1 + m2;
    int s3 = s1 + s2;
    if(s3 >= 60)
    {
        m3 += 1;
        s3 -= 60;
    }
    if(m3 >= 60)
    {
        h3 += 1;
        m3 -= 60;
    }
    printf("%d:%d:%d\n", h3, m3, s3);
    return 0;
}
