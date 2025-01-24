#include <stdio.h>

int main()
{
    int matrix[6][6], row, col, steps = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    while (row < 2)
    {
        for (int j = 0; j < 5; j++)
        {
            int temp = matrix[row][j];
            matrix[row][j] = matrix[row + 1][j];
            matrix[row + 1][j] = temp;
        }
        row++;
        steps++;
    }
    while (row > 2)
    {
        for (int j = 0; j < 5; j++)
        {
            int temp = matrix[row][j];
            matrix[row][j] = matrix[row - 1][j];
            matrix[row - 1][j] = temp;
        }
        row--;
        steps++;
    }
    if (row == 2)
    {
        while (col < 2)
        {
            for (int i = 0; i < 5; i++)
            {
                int temp = matrix[i][col];
                matrix[i][col] = matrix[i][col+1];
                matrix[i][col+1] = temp;
            }
            col++;
            steps++;
        }
        while (col>2)
        {
            for (int i = 0; i < 5; i++)
            {
                int temp = matrix[i][col];
                matrix[i][col] = matrix[i][col-1];
                matrix[i][col-1] = temp;
            }
            col--;
            steps++;
        }
    }    
    
    printf("%d\n",steps);
    return 0;
}