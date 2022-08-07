#include<stdio.h>
void main()
{
    int s,h,m,t;
    printf("\n Time in seconds");
    scanf("%d",&s);
    h=s/3600;
    t=s%3600;
    m=t/60;
    s=t%60;
    printf("\n Time is %d:%d:%d",h,m,s);
}
