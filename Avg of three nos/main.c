#include<stdio.h>
void main()
{
    int a,b,c,sum;
    float average;
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    sum=(a+b+c);
    average=sum/3;
    printf("Average of three numbers is %f",average);
}
