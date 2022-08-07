#include <stdio.h>
void main()
{
    int a,b,g;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        g=a;
    }
    else
    {
        g=b;
    }
    printf("Greatest number=%d",g);
}
