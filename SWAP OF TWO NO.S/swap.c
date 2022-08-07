#include<stdio.h>
void main()
{
    int first,second,temp;
    printf("Enter the first number= ");
    scanf("%d",&first);
    printf("Enter the second number= ");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("\n After swapping, first number= %d",first);
    printf("\n After Swapping second number= %d",second);


}
