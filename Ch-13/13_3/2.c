#include <stdio.h>

main()
{
    int r, c;

    printf("Enter row\t: ");
    scanf("%d", &r);
    printf("Enter column\t: ");
    scanf("%d", &c);

    int a[r][c], b[r][c], sum[r][c];
    int i, j;

    printf("\t\t Array 01\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\t\t Array 02\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element: ");
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    // sum of two 2D array

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}