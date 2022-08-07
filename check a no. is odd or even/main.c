#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2 = 0)    /*test for even*/
        printf("Number is even\n");

    else
    {
        printf("Number is Odd\n");
        num*=2;
        printf("So the Number is %d\n",num);
    }
}
