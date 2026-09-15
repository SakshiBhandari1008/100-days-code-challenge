//Find the transpose of a matrix

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print transpose
    for(j = 0; j < cols; j++)
    {
        for(i = 0; i < rows; i++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
    }
