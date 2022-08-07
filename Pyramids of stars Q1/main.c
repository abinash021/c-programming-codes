#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of lines=");
    scanf("%d",&n);
    for (i=1; i<=n; i++)          //*Loop for number of lines*//
    {
        for (j=1; j<=i; j++)      //*Loop for number of stars on a line*//
        printf("* ");
        printf("\n");              //*for next line of pyramid*//

    }

}
