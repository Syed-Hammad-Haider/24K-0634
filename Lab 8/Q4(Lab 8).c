#include <stdio.h>

int main()
{
    int first_matrix[3][3], second_matrix[3][3], product_matrix[3][3], difference_matrix[3][3];

    printf("Enter elements of Matrix A (3x3):\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &first_matrix[r][c]);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &second_matrix[r][c]);
        }
    }

    // Matrix multiplication: product_matrix = first_matrix x second_matrix
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            product_matrix[r][c] = 0;
            for (int k = 0; k < 3; k++)
            {
                product_matrix[r][c] += first_matrix[r][k] * second_matrix[k][c];
            }
        }
    }

    printf("Resultant Matrix (R = A x B):\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", product_matrix[r][c]);
        }
        printf("\n");
    }

    // Subtraction: difference_matrix = first_matrix - product_matrix
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            difference_matrix[r][c] = first_matrix[r][c] - product_matrix[r][c];
        }
    }

    printf("Subtracted Matrix (S = A - R):\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", difference_matrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}
