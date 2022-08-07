#include <stdio.h>
void main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Number entered is negative\n");
        num=-num;
    }
    printf("Value of num is : %d\n", num);
}
