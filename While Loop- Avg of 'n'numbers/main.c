#include <stdio.h>
void main()

{
    int i,n,sum=0;
    float avg;
    printf("Enter the value of n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    avg=(float)sum/n;
    printf("sum of no %d",sum);
    printf("Average is %f", avg);
}
