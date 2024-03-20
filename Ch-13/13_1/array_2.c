#include <stdio.h>

main()
{
    int size, i, j;

    printf("Enter array size: ");
    scanf("%d", &size);

    // Declration Array
    int array[size];

    // Input Array
    for (i = 0; i < size; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\n\n");
    // Output Array
    for (i = 0; i < size; i++)
        printf("Value %d = %d\n", i, array[i]);
}
