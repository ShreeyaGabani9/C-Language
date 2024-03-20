#include <stdio.h>

main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size], b[size], sum[size];

    printf("\n\n --: Array 01 :-- \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n --: Array 02 :-- \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    printf("\n\n Sum of Array a and b\n");
    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
        printf("Sum[%d] = %d\n", i, sum[i]);
    }

    // for (int i = 0; i < size; i++)
    //     printf("Sum[%d] = %d\n", i, sum[i]);
}