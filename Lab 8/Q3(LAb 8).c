#include <stdio.h>

int main()
{
    int grid[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &grid[r][c]);
        }
    }

    for (int r = 0; r < 3; r++)
    {
        int row_min = grid[r][0];
        int min_col_idx = 0;

        // Find the minimum element in the r-th row
        for (int c = 1; c < 3; c++)
        {
            if (grid[r][c] < row_min)
            {
                row_min = grid[r][c];
                min_col_idx = c;
            }
        }

        // Now check the column where we found the minimum element
        int col_max = grid[0][min_col_idx];
        for (int k = 0; k < 3; k++)
        {
            if (grid[k][min_col_idx] > col_max)
            {
                col_max = grid[k][min_col_idx];
            }
        }

        if (row_min == col_max)
        {
            printf("Saddle point found: %d at position (%d, %d)\n", row_min, r, min_col_idx);
        }
    }

    return 0;
}
