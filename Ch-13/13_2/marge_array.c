#include <stdio.h>

main()
{
    int size1, size2;

    printf("Enter first array size: ");
    scanf("%d", &size1);
    int a[size1];

    printf("Enter second array size: ");
    scanf("%d", &size2);
    int b[size2];

    int size3 = size1 + size2;

    int marge[size3];

    printf("\n\n --: Array 01 :-- \n");
    for (int i = 0; i < size1; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n --: Array 02 :-- \n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
        marge[i] = a[i];

    for (int i = 0; i < size2; i++)
        marge[size1 + i] = b[i];

    printf("\n\n --: Marge Array :-- \n");
    for (int i = 0; i < size3; i++)
        printf("%d\t", marge[i]);
}