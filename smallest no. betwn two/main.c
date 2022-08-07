#include <stdio.h>
void main()
{
    int a,b,s;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        s=a;
    }
    else
    {
        s=b;
    }
    printf("Smallest number=%d",s);
}
