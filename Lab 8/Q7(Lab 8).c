#include <stdio.h>

int main()
{
    char pattern_grid[105][105] = {};
    int current_row = 4, current_col = 0;
    int moving_up = 1;
    int space_count = 1;
    int complete_count = 0;

    printf("CALCING....\n");
    while (complete_count != 3)
    {
        printf("%d %d %d\n", current_row, current_col, space_count);
        pattern_grid[current_row][current_col] = '*';

        if (moving_up)
        {
            current_row--;
            current_col += space_count;
            space_count++;
        }
        else
        {
            current_row++;
            current_col += space_count;
            space_count--;
        }
        if (current_row == 0 && moving_up == 1)
        {
            moving_up = 0;
            space_count--;
        }
        else if (current_row == 4 && moving_up == 0)
        {
            space_count = 1;
            moving_up = 1;
            complete_count++;
            if (complete_count != 0)
            {
                pattern_grid[current_row][current_col] = '*';
                current_col += 2;
                if (complete_count != 3)
                    pattern_grid[current_row][current_col] = '*';
            }
        }
    }

    printf("GRID:\n");
    int row_index = 0;
    while (row_index <= 4)
    {
        int col_index = 0;
        while (col_index < 105)
        {
            if (pattern_grid[row_index][col_index] == '*')
            {
                printf("%c", pattern_grid[row_index][col_index]);
            }
            else
            {
                printf(" ");
            }
            col_index++;
        }
        printf("\n");
        row_index++;
    }
}
