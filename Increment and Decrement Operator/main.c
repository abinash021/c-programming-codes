#include<stdio.h>

int main(void)
{
    int m=5;
    printf("y=%d\t",++m); /*Prefix increment*/
    m=5;
    printf("y=%d\t",m++); /*Postfix increment*/
    m=5;
    printf("y=%d\t",--m); /*Prefix decrement*/
    m=5;
    printf("y=%d\t",m--); /*Postfix decrement*/
}

