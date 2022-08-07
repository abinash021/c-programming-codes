#include <stdio.h>
void main()
{
    float p,t,r,si,ci;
    printf("\n Enter the value of Principle");
    scanf("%f",&p);
    printf("\n Enter the value of Time");
    scanf("%f",&t);
    printf("\n Enter the value of Rate of Intrest");
    scanf("%f",&r);
    si=(p*t*r)/100;
    ci=p*pow((1+r/100),t);
    printf("\n The simple intrest is %f",si);
    printf("\n The compound intrest is %f",ci);
}
