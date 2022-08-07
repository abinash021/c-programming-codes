#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the First variable,a=");
    scanf("%d",&a);
    printf("Enter the Second variable,b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n Result after Interchange:--");
    printf("\n a=%d",a);
    printf("\n b=%d",b);
}
