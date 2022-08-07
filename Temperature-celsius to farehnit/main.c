#include<stdio.h>
void main()
{
    float c,fahrenheit;
    printf("Enter Temperature in celsius");
    scanf("%f", &c);
    fahrenheit=(c*9)/5+32;
    printf("Fahrenheit=%f", fahrenheit);
}

