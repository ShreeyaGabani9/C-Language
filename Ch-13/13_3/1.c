#include <stdio.h>

main()
{
    int row_size, col_size;

    // printf("Enter row and column: ");
    // scanf("%d %d", &row_size, &col_size);

    printf("Enter row: ");
    scanf("%d", &row_size);
    printf("Enter column: ");
    scanf("%d", &col_size);

    int a[row_size][col_size];
    int i, j, sum = 0;

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n 2D Array\n\n");

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // sum of all 2d array elements
    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            sum += a[i][j];
        }
    }

    printf("\nSum of all Elements: %d\n\n", sum);
    int avg = sum / (row_size * col_size);
    printf("AVG\t: %d", avg);
}