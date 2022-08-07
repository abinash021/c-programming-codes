#include <stdio.h>
void main()
{
    int l,b,h,vol;
    printf("Enter the value of length, breadth and height:-");
    scanf("%d%d%d", &l,&b,&h);
    vol=(l*b*h);
    printf("Volume of the box is %d", vol);
}
