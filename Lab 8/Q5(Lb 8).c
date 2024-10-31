#include <stdio.h>

int main()
{
    int total_rows;

    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &total_rows);

    // Upper half of the diamond
    for (int current_row = 1; current_row <= total_rows; current_row++)
    {
        for (int space = current_row; space < total_rows; space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= current_row; star++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int current_row = total_rows - 1; current_row >= 1; current_row--)
    {
        for (int space = total_rows; space > current_row; space--)
        {
            printf(" ");
        }
        for (int star = 1; star <= current_row; star++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
