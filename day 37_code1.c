//Find the sum of each row of a matrix and store it in an array

#include <stdio.h>

int main()
{
    int matrix[10][10], sum[10];
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

    // Calculate sum of each row
    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    // Display row sums
    for(i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}

