#include <stdio.h>
void main()
{
    int code;
    printf("\n MAIN MENU");
    printf("\n 1 for color code Red");
    printf("\n 2 for color code Green");
    printf("\n 3 for color code white");
    printf("\n 4 for color code Yellow");
    printf("\n Enter the color code");
    scanf("%d",&code);
    switch(code)
    {
    case 1:
        printf("\n color is Red");

        case 2:
            printf("\n color is Green");

            case 3:
                printf("\n color is white");

                case 4:
                    printf("\n color is Yellow");

       default:
        printf("\n color doesnot exist");
    }
}
