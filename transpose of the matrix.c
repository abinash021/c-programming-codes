#include<stdio.h>

int main()
 {
    int i, j, row, column; //variale declaration
    int a[100][100], b[100][100]; 
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &row, &column);
    for(i = 0; i < row; i++)
    { // loop for row
        for(j = 0; j < column; j++) 
        { // loop for column
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);  // taking input
        }
    }
    for(i = 0; i < column; i++) 
    { 
        for(j = 0; j < row; j++) 
        {
            b[j][i] = a[i][j]; // transpose of matrix
        }
    }
    printf("Transpose of matrix A is:\n");
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < column; j++) 
        {
            printf("%d ", b[i][j]); // printing transpose of matrix
        }
        printf("\n");
    }
    return 0;
}