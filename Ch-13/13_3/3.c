#include <stdio.h>

main()
{
    int r, c;

    printf("Enter row\t: ");
    scanf("%d", &r);
    printf("Enter column\t: ");
    scanf("%d", &c);

    int a[r][c];
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

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\t\n\n Diagonal Element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\t\n\n Anti-Diagonal Element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i + j == r - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\t\n\n Cross-Diagonal Element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j || i + j == r - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\t\n\n Boundary Element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}