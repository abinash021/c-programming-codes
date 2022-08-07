#include <stdio.h>
void main()
{
    int code;
    printf("Enter the color code");
    scanf("%d",&code);
    if(code==1)
    {
        printf("\n color is Red");
    }
    else if(code==2)
    {
        printf("\n color is Green");
    }
    else if(code==3)
    {
        printf("\n color code is White");
    }
    else if(code==4)
    {
        printf("\n color is Yellow");
    }
    else
    {
        printf("\n No color code defined");
        printf("\n End of the program");
    }

}
