#include <stdio.h>

int main()
{
    int numRows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    for (int currentRow = 0; currentRow < numRows; currentRow++)
    {
        int coefficient = 1;

        for (int space = 0; space < numRows - currentRow - 1; space++)
        {
            printf(" ");
        }

        for (int column = 0; column <= currentRow; column++)
        {
            printf("%d ", coefficient);
            coefficient = coefficient * (currentRow - column) / (column + 1);
        }
        printf("\n");
    }

    return 0;
}
